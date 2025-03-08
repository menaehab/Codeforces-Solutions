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
string a, b, c;
int dp[2005][2005];
int sol(int i = 0, int j = 0, int k = 0)
{
  int &ret = dp[i][j];
  if (ret != -1)
    return ret;
  if (k == c.size())
    return 0;
  int ch1 = INT_MAX, ch2 = INT_MAX;
  if (i < a.size())
    ch1 = (a[i] == c[k]) ? sol(i + 1, j, k + 1) : sol(i + 1, j, k + 1) + 1;
  if (j < b.size())
    ch2 = (b[j] == c[k]) ? sol(i, j + 1, k + 1) : sol(i, j + 1, k + 1) + 1;
  return ret = min(ch1, ch2);
}
int main()
{
  setup();
  int t;
  cin >> t;
  while (t--)
  {
    cin >> a >> b >> c;
    memset(dp, -1, sizeof dp);
    cout << sol() << el;
  }
  return 0;
}