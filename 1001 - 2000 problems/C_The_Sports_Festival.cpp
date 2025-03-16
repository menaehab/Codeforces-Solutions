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
int n;
vector<ll> arr;
ll dp[2005][2005];
ll sol(ll l = 0, ll r = n - 1)
{
  if (l >= r)
    return 0;
  ll &ret = dp[l][r];
  if (~ret)
    return ret;
  ll ch1 = sol(l + 1, r) + arr[r] - arr[l];
  ll ch2 = sol(l, r - 1) + arr[r] - arr[l];
  return ret = min(ch1, ch2);
}
int main()
{
  setup();
  cin >> n;
  arr.resize(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  sort(all(arr));
  memset(dp, -1, sizeof dp);
  cout << sol() << el;
  return 0;
}