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
int dp[5005][5005];
int sol(int i = 0, int rem = k)
{
  if (i == n)
    return (rem ? -1e8 : 0);
  int &ret = dp[i][rem];
  if (~ret)
    return ret;
  int ch1 = sol(i + 1, rem);
  int ch2 = sol(i + 1, rem - 1) + 1;
  int idx = upper_bound(all(arr), arr[i] + 5) - arr.begin();
  int ch3 = (idx > i) ? (sol(idx, rem - 1) + (idx - i)) : 0;
  return ret = max({ch1, ch2, ch3});
}
int main()
{
  setup();
  cin >> n >> k;
  arr.resize(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  sort(all(arr));
  memset(dp, -1, sizeof dp);
  cout << sol();
  return 0;
}