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
int dp[205][205][205];
int n, m;
int sol(int i = 0, int j = 0, int sum = 0)
{
  if (i == n && j == m)
    return sum;
  int &ret = dp[i][j][sum];
  if (~ret)
    return ret;
  int ch1 = INT_MAX, ch2 = INT_MAX;
  if ((s[i] == '(' || t[i] == '('))
    ch1 = sol(i + (s[i] == '('), j + (s[i] == '('), sum + 1) + 1;
  if (s[i] == ')' || t[i] == ')')
    ch2 = sol(i + (s[i] == ')'), j + (s[i] == ')'), max(sum - 1, 0)) + 1 + (sum == 0);
  return ret = min(ch1, ch2);
}
int main()
{
  setup();
  cin >> s >> t;
  n = s.size(), m = t.size();
  memset(dp, -1, sizeof dp);
  cout << sol();
  return 0;
}