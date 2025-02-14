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
vector<vector<int>> arr;
vector<vector<bool>> vis;
void sol(int x = 0, int y = 0)
{
  if (x == n - 1 && y == m - 1)
  {
    ans++;
    return;
  }
  if (x >= n || y >= m || x < 0 || y < 0 || arr[x][y] == 0 || vis[x][y])
    return;
  vis[x][y] = 1;
  sol(x + 1, y);
  sol(x - 1, y);
  sol(x, y + 1);
  sol(x, y - 1);
  vis[x][y] = 0;
}
int main()
{
  setup();
  cin >> n >> m;
  arr.resize(n, vector<int>(m));
  vis.resize(n, vector<bool>(m));
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> arr[i][j];
    }
  }
  sol();
  cout << ans << el;
  return 0;
}