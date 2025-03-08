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
const int N = 1e5 + 5;
int n, m, dp[N][105];
const ll mod = 1e9 + 7;
vector<int> arr;
int sol(int i = 0, int last = 0)
{
  if (i == n)
    return 1;
  int &ret = dp[i][last];
  if (ret != -1)
    return ret;
  int res = 0;
  if (arr[i] != 0)
  {
    if (i == 0 || abs(arr[i] - last) <= 1)
      res = sol(i + 1, arr[i]);
  }
  else
  {
    int x = (i == 0) ? 1 : max(1, last - 1);
    int y = (i == 0) ? m : min(m, last + 1);
    for (int j = x; j <= y; j++)
      res = (res + sol(i + 1, j)) % mod;
  }
  return ret = res;
}
int main()
{
  setup();
  cin >> n >> m;
  arr.resize(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  memset(dp, -1, sizeof dp);
  cout << sol();
  return 0;
}