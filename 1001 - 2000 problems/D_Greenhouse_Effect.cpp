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
vector<int> arr;
ll dp[5005][5005];
ll sol(ll i = 0, ll last = 0)
{
  if (i == n)
    return 0;
  if (dp[i][last] != -1)
    return dp[i][last];
  ll &ret = dp[i][last] = 1e9;
  ret = min(ret, sol(i + 1, last) + 1);
  if (arr[i] >= last)
  {
    ret = min(ret, sol(i + 1, arr[i]));
  }
  return ret;
}
int main()
{
  setup();
  cin >> n >> m;
  arr.resize(n);
  for (int i = 0; i < n; i++)
  {
    float x;
    cin >> arr[i] >> x;
  }
  memset(dp, -1, sizeof dp);
  cout << sol();
  return 0;
}