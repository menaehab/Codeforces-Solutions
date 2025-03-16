#include <bits/stdc++.h>
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
vector<ll> arr;
bool can(ll m)
{
  bool f = 0;
  ll cnt = 0;
  for (int i = 0; i < n; i++)
  {
    if (m >= arr[i] && !f)
    {
      cnt++;
      m--;
      f = 1;
    }
    else
      f = 0;
  }
  return (cnt >= k);
}
int main()
{
  setup();
  cin >> n >> k;
  arr.resize(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  ll l = 1, r = 1e10, ans = -1;
  while (l <= r)
  {
    ll m = l + (r - l) / 2;
    if (can(m))
    {
      ans = m;
      r = m - 1;
    }
    else
    {
      l = m + 1;
    }
  }
  cout << ans;
  return 0;
}