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
const int N = 2e5 + 5;
int n;
vector<int> arr;
int dp[1005][N];
int sol(int i = 0, int prev = 0)
{
  if (dp[i][prev] != -1)
    return dp[i][prev];
  if (i == n)
    return 0;
  int leave = sol(i + 1, prev);
  int take = 0;
  if (arr[i] > prev)
    take = 1 + sol(i + 1, arr[i]);
  return dp[i][prev] = max(leave, take);
}

int main()
{
  setup();
  cin >> n;
  arr.resize(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  memset(dp, -1, sizeof dp);
  cout << sol();
  return 0;
}