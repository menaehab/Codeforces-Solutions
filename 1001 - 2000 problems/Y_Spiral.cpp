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
vector<vector<ll>> arr;
vector<vector<bool>> vis;
int dx[] = {0, 1, 0, -1}, dy[] = {1, 0, -1, 0};
void sol(ll i = 0, ll j = 0, ll dir = 0, ll cnt = 0)
{
  if (cnt == n * m)
    return;
  cout << arr[i][j] << " ";
  vis[i][j] = true;
  ll ii = i + dx[dir], jj = j + dy[dir];
  if (ii < 0 || ii >= n || jj < 0 || jj >= m || vis[ii][jj])
  {
    dir = (dir + 1) % 4;
    ii = i + dx[dir];
    jj = j + dy[dir];
  }
  sol(ii, jj, dir, cnt + 1);
}
int main()
{
  setup();
  cin >> n >> m;
  arr.resize(n, vector<ll>(m));
  vis.resize(n, vector<bool>(m));
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> arr[i][j];
    }
  }
  sol();
  return 0;
}