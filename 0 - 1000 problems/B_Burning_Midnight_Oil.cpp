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
bool can(ll mid, ll k, ll n)
{
  ll sum = mid;
  while (mid > 0)
  {
    sum += mid / k;
    mid /= k;
  }
  return sum >= n;
}
int main()
{
  setup();
  ll n, k;
  cin >> n >> k;
  ll l = 0, r = n, res = n;
  while (l <= r)
  {
    ll mid = (l + r) / 2;
    if (can(mid, k, n))
    {
      res = mid;
      r = mid - 1;
    }
    else
      l = mid + 1;
  }
  cout << res;
  return 0;
}