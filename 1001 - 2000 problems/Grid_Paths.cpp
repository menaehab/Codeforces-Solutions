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
const int N = 1e3 + 9;
char arr[N][N];
ll dp[N][N];
ll mod = 1e9 + 7;
ll n;
ll sol(ll i = 0, ll j = 0)
{
  if (i >= n || j >= n || arr[i][j] == '*')
    return 0;
  if (i == n - 1 && j == n - 1)
  {
    return 1;
  }
  if (dp[i][j] != -1)
    return dp[i][j];
  ll ch1 = sol(i + 1, j);
  ll ch2 = sol(i, j + 1);
  return dp[i][j] = (ch1 + ch2) % mod;
}
int main()
{
  setup();
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> arr[i][j];
    }
  }
  memset(dp, -1, sizeof dp);
  ll ans = sol();
  cout << ans;
  return 0;
}