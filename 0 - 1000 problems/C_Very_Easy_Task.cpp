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
ll n, x, y;
bool good(ll k)
{
  if (k < min(x, y))
    return 0;
  int cnt = 1;
  k -= min(x, y);
  cnt += k / x + k / y;
  return cnt >= n;
}
int main()
{
  setup();
  cin >> n >> x >> y;
  ll l = 0, r = max(x, y) * n;
  while (l + 1 < r)
  {
    int mid = (l + r) / 2;
    if (good(mid))
    {
      r = mid;
    }
    else
      l = mid;
  }
  cout << r;
  return 0;
}