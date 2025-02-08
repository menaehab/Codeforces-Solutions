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
vector<vector<int>> arr;
ll n, m;
ll sol(int x, int y)
{
  if (x == n - 1 && y == m - 1)
    return arr[x][y];
  if (x < 0 || y < 0 || x >= n || y >= m)
    return -1e6;
  return max(sol(x + 1, y), sol(x, y + 1)) + arr[x][y];
}
int main()
{
  setup();
  cin >> n >> m;
  arr.resize(n, vector<int>(m));
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> arr[i][j];
    }
  }
  cout << sol(0, 0);
  return 0;
}