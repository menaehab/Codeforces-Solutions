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
vector<vector<int>> arr;
int dp[105][105];
int sol(int i, int j)
{
  if (dp[i][j] != -1)
    return dp[i][j];
  if (j < 0 || j >= m)
    return 0;
  if (i == n - 1)
    return arr[i][j];
  if (dp[i][j] != -1)
    return dp[i][j];
  int ch1 = sol(i + 1, j + 1) + arr[i][j];
  int ch2 = sol(i + 1, j - 1) + arr[i][j];
  int ch3 = sol(i + 1, j) + arr[i][j];
  return dp[i][j] = max({ch1, ch2, ch3});
}
int main()
{
  setup();
  int t;
  cin >> t;
  while (t--)
  {
    cin >> n >> m;
    arr.resize(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        cin >> arr[i][j];
      }
    }
    memset(dp, -1, sizeof dp);
    int ans = 0;
    for (int i = 0; i < m; i++)
    {
      ans = max(ans, sol(0, i));
    }
    cout << ans << el;
    arr.clear();
  }
  return 0;
}