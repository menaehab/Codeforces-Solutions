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
vector<int> arr;
const int N = 2e5 + 5;
int dp[N];
int sol(int i = 0)
{
  if (dp[i] != -1)
    return dp[i];
  if (i == n - 1)
    return 0;
  int ans = INT_MAX;
  for (int x = i + 1; x <= i + k && x < n; x++)
  {
    ans = min(ans, sol(x) + abs(arr[i] - arr[x]));
  }
  return dp[i] = ans;
}
int main()
{
  setup();
  cin >> n >> k;
  arr.resize(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  memset(dp, -1, sizeof(dp));
  cout << sol();
  return 0;
}