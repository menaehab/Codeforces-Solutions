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
string s;
int n;
int dp[1005][1005];
string dpBuild[1005][1005];
bool vis[1005][1005];
int sol(int l = 0, int r = n - 1)
{
  if (l > r)
    return 0;
  if (l == r)
    return 1;
  int &ret = dp[l][r];
  if (~ret)
    return ret;
  int ch1 = 0, ch2 = 0, ch3 = 0;
  if (s[l] == s[r])
    ch1 = sol(l + 1, r - 1) + 2;
  else
  {
    ch2 = sol(l + 1, r);
    ch3 = sol(l, r - 1);
  }
  return ret = max({ch1, ch2, ch3});
}
string build(int l = 0, int r = n - 1)
{
  if (l > r)
    return "";
  if (l == r)
    return string(1, s[l]);
  if (vis[l][r])
    return dpBuild[l][r];
  vis[l][r] = 1;
  string &ret = dpBuild[l][r];
  int ans = sol(l, r);
  string mn = "{";
  if (s[l] == s[r] && sol(l + 1, r - 1) + 2 == ans)
    mn = min(mn, s[l] + build(l + 1, r - 1) + s[r]);
  if (sol(l + 1, r) == ans)
    mn = min(mn, build(l + 1, r));
  if (sol(l, r - 1) == ans)
    mn = min(mn, build(l, r - 1));

  return ret = mn;
}
int main()
{
  setup();
  while (cin >> s)
  {
    n = s.size();
    memset(dp, -1, sizeof dp);
    memset(vis, 0, sizeof vis);
    sol();
    cout << build() << el;
  }
  return 0;
}