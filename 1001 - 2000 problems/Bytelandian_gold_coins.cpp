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
ll n;
unordered_map<ll, ll> dp;
ll sol(ll x)
{
  if (x == 0)
    return 0;
  ll &ret = dp[x];
  if (ret)
    return ret;
  ll ans = sol(x / 2) + sol(x / 3) + sol(x / 4);
  return ret = max(ans, x);
}
int main()
{
  setup();
  while (cin >> n)
  {
    dp.clear();
    cout << sol(n) << el;
  }
  return 0;
}