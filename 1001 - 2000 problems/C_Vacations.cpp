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
vector<int> arr;
int dp[105][5];
int sol(int i = 0, int f = 0)
{
  if (dp[i][f] != -1)
    return dp[i][f];
  if (i == n)
    return 0;
  if (arr[i] == 0)
    return dp[i][f] = sol(i + 1, 0) + 1;
  if (arr[i] == 1)
  {
    if (f != 2)
      return dp[i][f] = sol(i + 1, 2);
    return dp[i][f] = sol(i + 1, 0) + 1;
  }
  if (arr[i] == 2)
  {
    if (f != 1)
      return dp[i][f] = sol(i + 1, 1);
    return dp[i][f] = sol(i + 1, 0) + 1;
  }
  if (arr[i] == 3)
  {
    if (f == 1)
      return dp[i][f] = sol(i + 1, 2);
    if (f == 2)
      return dp[i][f] = sol(i + 1, 1);
    return dp[i][f] = min(sol(i + 1, 1), sol(i + 1, 2));
  }
}
int main()
{
  setup();
  cin >> n;
  arr.resize(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  memset(dp, -1, sizeof dp);
  cout << sol() << el;
  return 0;
}

/*
0 == non
1 == sport
2 == contest
*/