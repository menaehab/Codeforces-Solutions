#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <iomanip>
#include <string>
#include <set>
#include <queue>
#include <unordered_map>
#include <unordered_set>
#define ll long long
#define el '\n'
#define all(arr) arr.begin(), arr.end()
#define allr(arr) arr.rbegin(), arr.rend()
#define pi 3.14159265358979323846
using namespace std;
void setup()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
}
struct coordinateCompression
{
private:
  vector<ll> init;
  void compress(vector<ll> &v)
  {
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
  }

public:
  coordinateCompression(vector<ll> &v)
  {
    init = v;
    compress(init);
  }
  int index(ll val)
  {
    return lower_bound(init.begin(), init.end(), val) - init.begin();
  }
  ll initVal(int idx)
  {
    return init[idx];
  }
};
int main()
{
  setup();
  int n;
  cin >> n;
  vector<ll> x(n), y(n), idx, arr(n + n + 1);
  for (int i = 0; i < n; i++)
  {
    cin >> x[i] >> y[i];
    idx.push_back(x[i]);
    idx.push_back(y[i]);
  }
  coordinateCompression co(idx);
  for (int i = 0; i < n; i++)
  {
    x[i] = co.index(x[i]);
    y[i] = co.index(y[i]);
  }

  for (int i = 0; i < n; i++)
  {
    arr[x[i]]++;
    arr[y[i] + 1]--;
  }
  for (int i = 1; i <= n + n + 1; i++)
  {
    arr[i] += arr[i - 1];
  }
  cout << *max_element(all(arr));
  return 0;
}