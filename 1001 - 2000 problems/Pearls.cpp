#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstring>
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
vector<pair<int, int>> arr;
ll dp[1005][1005];
ll sol(int l = 0, int r = 0)
{
  if (l == n)
    return 0;
  if (r >= n)
    return 1e9;
  ll &ret = dp[l][r];
  if (~ret)
    return ret;
  ll ch1 = sol(l, r + 1);
  ll sum = 0;
  for (int i = l; i <= r; i++)
    sum += arr[i].first;
  ll ch2 = (sum + 10) * arr[r].second + sol(r + 1, r + 1);
  return ret = min(ch1, ch2);
}
int main()
{
  setup();
  int t;
  cin >> t;
  while (t--)
  {
    cin >> n;
    arr.resize(n);
    for (int i = 0; i < n; i++)
      cin >> arr[i].first >> arr[i].second;
    memset(dp, -1, sizeof dp);
    cout << sol() << el;
  }
  return 0;
}