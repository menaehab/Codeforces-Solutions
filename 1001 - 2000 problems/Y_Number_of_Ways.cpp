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
int n, m, ans = 0;
int dp[5000];
int sol(int sum)
{
  if (dp[sum] != -1)
    return dp[sum];
  if (sum == m)
  {
    return 1;
  }
  if (sum > m)
    return 0;
  dp[sum + 1] = sol(sum + 1);
  dp[sum + 2] = sol(sum + 2);
  dp[sum + 3] = sol(sum + 3);
  return dp[sum + 1] + dp[sum + 2] + dp[sum + 3];
}
int main()
{
  setup();
  cin >> n >> m;
  memset(dp, -1, sizeof dp);
  ans = sol(n);
  cout << ans << el;
  return 0;
}