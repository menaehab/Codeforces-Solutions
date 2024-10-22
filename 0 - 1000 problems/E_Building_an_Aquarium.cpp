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

bool can(ll mid, ll n, ll x, vector<ll> arr)
{
  ll sum = 0;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] >= mid)
      continue;
    sum += (mid - arr[i]);
  }
  return sum <= x;
}
int main()
{
  setup();
  int t;
  cin >> t;
  while (t--)
  {
    ll n, x;
    cin >> n >> x;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    ll l = 1, r = *max_element(all(arr)) + x, ans = 0;
    while (l <= r)
    {
      ll mid = (l + r) / 2;
      if (can(mid, n, x, arr))
      {
        ans = mid;
        l = mid + 1;
      }
      else
      {
        r = mid - 1;
      }
    }
    cout << ans << el;
  }
  return 0;
}