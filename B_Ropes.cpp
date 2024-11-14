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
ll n, k;
vector<double> arr(10005);
bool can(double mid)
{
  ll sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += floor(arr[i] / mid);
  }
  return sum >= k;
}
int main()
{
  setup();
  cin >> n >> k;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int it = 300;
  double l = 0, r = 1e7, res = 0;
  while (l <= r && it--)
  {
    double mid = (l + r) / 2;
    if (can(mid))
    {
      res = mid;
      l = mid;
    }
    else
      r = mid;
  }
  cout.precision(6);
  cout << fixed << res;
  return 0;
}