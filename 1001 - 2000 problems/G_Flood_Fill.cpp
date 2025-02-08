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
int sol(int x, int y)
{
  if (x < 0 || y < 0 || x >= n || y >= m || arr[x][y] == '*' || vis[x][y])
    return 0;
  vis[x][y] = 1;
  int ans = 0;
  ans += sol(x - 1, y);
  ans += sol(x + 1, y);
  ans += sol(x, y - 1);
  ans += sol(x, y + 1);
  return ans + 1;
}
int main()
{
  setup();
  cin >> n >> m;
  arr.resize(n, vector<char>(m));
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> arr[i][j];
    }
  }
  int x, y;
  cin >> x >> y;
  vis.resize(n, vector<bool>(m));
  cout << sol(x - 1, y - 1);
  return 0;
}