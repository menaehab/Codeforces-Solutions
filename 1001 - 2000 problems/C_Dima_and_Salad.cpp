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
int n, k;
vector<pair<int, int>> arr;
const int N = 2e5 + 5;
int dp[105][N];
int sol(int i = 0, int sum = 0)
{
  if (dp[i][sum] != -1)
    return dp[i][sum];
  if (i == n)
    return ((sum == 0) ? 0 : -1e9);
  int ch1 = sol(i + 1, sum);
  int ch2 = sol(i + 1, sum + arr[i].first - arr[i].second * k) + arr[i].first;
  return dp[i][sum] = max(ch1, ch2);
}
int main()
{
  setup();
  cin >> n >> k;
  arr.resize(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i].first;
  for (int i = 0; i < n; i++)
    cin >> arr[i].second;
  memset(dp, -1, sizeof dp);
  ll ans = sol();
  cout << ((ans <= 0) ? -1 : ans) << el;
  return 0;
}