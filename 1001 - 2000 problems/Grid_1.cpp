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
vector<vector<char>> arr;
ll dp[1005][1005];
ll sol(int i = 0, int j = 0)
{
  if (dp[i][j] != -1)
    return dp[i][j];
  if (i >= n || j >= m || arr[i][j] == '#')
    return 0;
  if (i == n - 1 && j == m - 1)
    return 1;
  ll ch1 = sol(i + 1, j);
  ll ch2 = sol(i, j + 1);
  return dp[i][j] = (ch1 + ch2) % 1000000007;
}
int main()
{
  setup();
  cin >> n >> m;
  arr.resize(n, vector<char>(m));
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> arr[i][j];
  memset(dp, -1, sizeof dp);
  cout << sol() % 1000000007 << el;
  return 0;
}