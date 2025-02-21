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
vector<vector<int>> arr;
const int N = 2e5 + 5;
ll dp[N][3];
int sol(int idx, int prev)
{
  if (dp[idx][prev] != -1)
    return dp[idx][prev];
  if (idx == n)
    return 0;
  int ch1 = arr[idx][prev] + sol(idx + 1, (prev + 1) % 3);
  int ch2 = arr[idx][prev] + sol(idx + 1, (prev + 2) % 3);
  return dp[idx][prev] = max(ch1, ch2);
}
int main()
{
  setup();
  cin >> n;
  arr.resize(n);
  for (int i = 0; i < n; i++)
  {
    arr[i].resize(3);
    for (int j = 0; j < 3; j++)
    {
      cin >> arr[i][j];
    }
  }
  memset(dp, -1, sizeof dp);
  cout << max({sol(0, 0), sol(0, 1), sol(0, 2)}) << el;
  return 0;
}