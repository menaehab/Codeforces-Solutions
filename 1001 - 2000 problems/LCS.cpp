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
string s, t;
int n, m;
int dp[5005][5005];
int sol(int i = 0, int j = 0)
{
  if (i == n || j == m)
    return 0;
  int &ret = dp[i][j];
  if (~ret)
    return ret;
  int ch1 = sol(i + 1, j);
  int ch2 = sol(i, j + 1);
  int ch3 = sol(i + 1, j + 1) + (s[i] == t[j]);
  return ret = max({ch1, ch2, ch3});
}
void bulid(int i = 0, int j = 0)
{
  if (i == n || j == m)
    return;
  int &ret = dp[i][j];
  int ch1 = sol(i + 1, j);
  int ch2 = sol(i, j + 1);
  int ch3 = sol(i + 1, j + 1) + (s[i] == t[j]);
  if (s[i] == t[j])
  {
    cout << s[i];
    bulid(i + 1, j + 1);
    return;
  }
  else if (ch1 == ret)
    bulid(i + 1, j);
  else if (ch2 == ret)
    bulid(i, j + 1);
  else
    bulid(i + 1, j + 1);
}
int main()
{
  setup();
  cin >> s >> t;
  n = s.size(), m = t.size();
  memset(dp, -1, sizeof dp);
  sol();
  bulid();
  return 0;
}