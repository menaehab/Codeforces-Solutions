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
const int N = 2e5 + 5;
ll dp[N][2];
vector<int> a, b;
ll sol(int i, bool d)
{
  if (i == n)
    return 0;
  if (dp[i][d] != -1)
    return dp[i][d];
  dp[i][d] = sol(i + 1, d);
  if (d)
    dp[i][d] = max(dp[i][d], a[i] + sol(i + 1, !d));
  else
    dp[i][d] = max(dp[i][d], b[i] + sol(i + 1, !d));
  return dp[i][d];
}
int main()
{
  setup();
  cin >> n;
  a.resize(n);
  b.resize(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i = 0; i < n; i++)
    cin >> b[i];
  memset(dp, -1, sizeof dp);
  cout << max(sol(0, 0), sol(0, 1));
  return 0;
}