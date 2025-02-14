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
vector<vector<int>> arr, ans;
vector<int> pth;
void sol(int x = 0, int y = 0)
{
  if (x >= n || y >= m)
    return;
  if (x == n - 1 && y == m - 1)
  {
    pth.push_back(arr[x][y]);
    ans.push_back(pth);
    pth.pop_back();
    return;
  }
  pth.push_back(arr[x][y]);
  sol(x + 1, y);
  sol(x, y + 1);
  pth.pop_back();
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
  sol();
  sort(all(ans));
  for (auto x : ans)
  {
    for (int y : x)
      cout << y << " ";
    cout << el;
  }
  return 0;
}