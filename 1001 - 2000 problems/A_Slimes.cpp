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
vector<ll> arr, prfx;
ll dp[405][405];
ll sol(int l = 0, int r = n - 1)
{
  if (l == r)
    return 0;
  ll &ret = dp[l][r];
  if (~ret)
    return ret;
  ll ans = 1e15;
  for (int i = l; i < r; i++)
  {
    ans = min(ans, sol(l, i) + sol(i + 1, r));
  }
  return ret = ans + prfx[r] - (l ? prfx[l - 1] : 0);
}
int main()
{
  setup();
  cin >> n;
  arr.resize(n);
  prfx.resize(n + 1);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    prfx[i] = arr[i];
    if (i)
      prfx[i] += prfx[i - 1];
  }
  memset(dp, -1, sizeof dp);
  cout << sol();
  return 0;
}