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
int n, m, k;
vector<ll> arr;
ll dp[5005][5005];
ll sol(ll l = 0, ll r = 0)
{
  if (r == k)
    return 0;
  if (l > n - m)
    return -1e9;
  ll &ret = dp[l][r];
  if (~ret)
    return ret;
  ll ch1 = sol(l + 1, r);
  ll ch2 = sol(l + m, r + 1) + arr[l + m - 1] - (l ? arr[l - 1] : 0);
  return ret = max(ch1, ch2);
}
int main()
{
  setup();
  cin >> n >> m >> k;
  arr.resize(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  for (int i = 1; i < n; i++)
    arr[i] += arr[i - 1];
  memset(dp, -1, sizeof dp);
  cout << sol() << el;
  return 0;
}