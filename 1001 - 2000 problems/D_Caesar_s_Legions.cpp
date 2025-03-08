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
int n1, n2, k1, k2;
const int mod = 100000000;
int dp[105][105][15][15];
int sol(int i = 0, int j = 0, int cnt1 = 0, int cnt2 = 0)
{
  if (i == n1 && j == n2)
    return 1;
  int &ret = dp[i][j][cnt1][cnt2];
  if (ret != -1)
    return ret;
  int ch1 = 0, ch2 = 0;
  if (cnt1 < k1 && i < n1)
    ch1 = sol(i + 1, j, cnt1 + 1, 0);
  if (cnt2 < k2 && j < n2)
    ch2 = sol(i, j + 1, 0, cnt2 + 1);
  return ret = (ch1 + ch2) % mod;
}
int main()
{
  setup();
  cin >> n1 >> n2 >> k1 >> k2;
  memset(dp, -1, sizeof dp);
  cout << sol();
  return 0;
}