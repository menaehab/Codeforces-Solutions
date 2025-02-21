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
const int N = 2e5 + 5;

int dp[N];
int sol(int i = 0)
{
  if (dp[i] != -1)
    return dp[i];
  if (i == n - 1)
    return 0;
  int ch1 = INT_MAX, ch2 = INT_MAX;
  if (i + 1 < n)
    ch1 = sol(i + 1) + abs(arr[i] - arr[i + 1]);
  if (i + 2 < n)
    ch2 = sol(i + 2) + abs(arr[i] - arr[i + 2]);
  return dp[i] = min(ch1, ch2);
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
  memset(dp, -1, sizeof(dp));
  cout << sol();
  return 0;
}