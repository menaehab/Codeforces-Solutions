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
int n;
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
vector<vector<int>> arr;
vector<vector<bool>> vis;
void sol(int x = 0, int y = 0, int d = 0, int cnt = 0)
{
  cout << arr[x][y] << " ";
  vis[x][y] = 1;
  if (cnt == n - 1)
    cout << el;
  cnt = (cnt + 1) % n;
  int xx = x + dx[d], yy = y + dy[d];
  if (xx >= 0 && xx < n && yy >= 0 && yy < n && !vis[xx][yy])
    sol(xx, yy, d, cnt);
  else
  {
    d = (d + 1) % 4;
    xx = x + dx[d];
    yy = y + dy[d];
    if (xx >= 0 && xx < n && yy >= 0 && yy < n && !vis[xx][yy])
      sol(xx, yy, d, cnt);
  }
}

int main()
{
  setup();
  cin >> n;
  arr.resize(n, vector<int>(n));
  vis.resize(n, vector<bool>(n));
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> arr[i][j];
    }
  }
  sol();
  return 0;
}