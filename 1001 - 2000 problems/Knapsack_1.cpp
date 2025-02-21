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
ll n, k;
vector<pair<ll, ll>> arr;
const int N = 2e5 + 5;
ll dp[105][N];
ll sol(ll i = 0, ll sum = 0)
{
  if (dp[i][sum] != -1)
    return dp[i][sum];
  if (i == n)
    return 0;
  ll take = 0;
  if (arr[i].first + sum <= k)
    take = arr[i].second + sol(i + 1, sum + arr[i].first);
  ll leave = sol(i + 1, sum);
  return dp[i][sum] = max(take, leave);
}
int main()
{
  setup();
  cin >> n >> k;
  arr.resize(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i].first >> arr[i].second;
  memset(dp, -1, sizeof dp);
  cout << sol();
  return 0;
}