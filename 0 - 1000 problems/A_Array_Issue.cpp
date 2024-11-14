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
int main()
{
  setup();
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<ll> arr(n), res(n);
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    ll cur = arr[0], mx = arr[0];
    res[0] = max(0LL, arr[0]);
    for (int i = 1; i < n; i++)
    {
      cur = max(arr[i], cur + arr[i]);
      mx = max(cur, mx);
      res[i] = max(0LL, mx);
    }
    for (int i = 0; i < n; i++)
    {
      cout << res[i] << " ";
    }
    cout << el;
  }
  return 0;
}