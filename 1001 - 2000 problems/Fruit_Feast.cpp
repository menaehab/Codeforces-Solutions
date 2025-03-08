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
  freopen("feast.in", "r", stdin);
  freopen("feast.out", "w", stdout);
#endif
}
int t, a, b;
const int N = 5e6 + 5;
int dp[N][2];
int sol(int mx = 0, bool f = true)
{
  if (mx > t)
    return INT_MIN;
  int &ret = dp[mx][f];
  if (~ret)
    return ret;
  int ch1 = sol(mx + a, f);
  int ch2 = sol(mx + b, f);
  int ch3 = INT_MIN;
  if (f)
    ch3 = sol(mx / 2, 0);
  int ch4 = mx;
  return ret = max({ch1, ch2, ch3, ch4});
}
int main()
{
  setup();
  cin >> t >> a >> b;
  memset(dp, -1, sizeof dp);
  cout << sol();
  return 0;
}