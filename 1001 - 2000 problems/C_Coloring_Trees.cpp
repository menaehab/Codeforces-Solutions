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
int k, n, m;
vector<int> arr;
vector<vector<int>> price;
ll dp[105][105][105];
ll sol(int i = 0, int last = 0, int cnt = 0)
{
  if (cnt > k)
    return 1e18;
  if (i == n)
    return (cnt == k) ? 0 : 1e18;
  ll &ret = dp[i][last][cnt];
  if (ret != -1)
    return ret;
  ret = 1e18;
  if (arr[i])
    ret = sol(i + 1, arr[i], cnt + (arr[i] != last));
  else
  {
    for (int j = 1; j <= m; j++)
    {
      ret = min(ret, sol(i + 1, j, cnt + (j != last)) + price[i][j - 1]);
    }
  }
  return ret;
}
int main()
{
  setup();
  cin >> n >> m >> k;
  arr.resize(n);
  price.resize(n, vector<int>(m));
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> price[i][j];
  memset(dp, -1, sizeof dp);
  ll ans = sol();
  cout << ((ans == 1e18) ? -1 : ans) << el;
  return 0;
}