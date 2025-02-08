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
vector<vector<char>> arr;
int Sx, Sy, Ex, Ey, n, m;
vector<vector<bool>> vis;
bool sol(int x, int y)
{
  if (x == Ex && y == Ey)
    return true;
  if (x < 0 || y < 0 || x >= n || y >= m || arr[x][y] == '*' || vis[x][y])
    return false;
  vis[x][y] = true;
  bool ans = false;
  ans |= sol(x - 1, y);
  ans |= sol(x + 1, y);
  ans |= sol(x, y - 1);
  ans |= sol(x, y + 1);
  return ans;
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
      if (arr[i][j] == 'S')
      {
        Sx = i;
        Sy = j;
      }
      if (arr[i][j] == 'E')
      {
        Ex = i;
        Ey = j;
      }
    }
  }
  if (sol(Sx, Sy))
    cout << "YES" << el;
  else
    cout << "NO" << el;
  return 0;
}