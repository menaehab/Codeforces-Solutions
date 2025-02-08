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
vector<vector<bool>> vis;
void sol(int x, int y, char c)
{
  if (x < 0 || x >= n || y < 0 || y >= m || vis[x][y] || arr[x][y] != c)
    return;
  vis[x][y] = true;
  sol(x + 1, y, c);
  sol(x - 1, y, c);
  sol(x, y + 1, c);
  sol(x, y - 1, c);
}
int main()
{
  setup();
  cin >> n >> m;
  arr.resize(n, vector<char>(m));
  vis.resize(n, vector<bool>(m));
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> arr[i][j];
    }
  }
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (!vis[i][j])
      {
        sol(i, j, arr[i][j]);
        ans++;
      }
    }
  }
  cout << ans;
  return 0;
}