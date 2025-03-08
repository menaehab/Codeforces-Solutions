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
int n, m;
const ll mod = 1e9 + 7;
ll dp[3005][3005];
ll sol(int i, int j)
{
  if (i == 1 && j == 1)
    return 1;
  if (i < 1 || j < 1)
    return 0;
  if (dp[i][j] != -1)
    return dp[i][j];
  dp[i][j] = (sol(i - 1, j) + sol(i, j - 1)) % mod;
  return dp[i][j];
}
int main()
{
  setup();
  int t;
  cin >> t;
  memset(dp, -1, sizeof dp);
  dp[1][1] = 1;
  for (int i = 1; i <= 3000; i++)
  {
    for (int j = 1; j <= 3000; j++)
    {
      sol(i, j);
    }
  }
  while (t--)
  {
    cin >> n >> m;
    cout << dp[n][m] << el;
  }
  return 0;
}