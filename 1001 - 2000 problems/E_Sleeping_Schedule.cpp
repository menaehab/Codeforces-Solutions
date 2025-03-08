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
int n, h, l, r;
vector<int> arr;
int dp[2005][2005];
int sol(int i = 0, int sum = 0)
{
  if (i == n)
    return 0;
  int &ret = dp[i][sum];
  if (ret != -1)
    return ret;
  int x1 = (sum + arr[i]) % h;
  int x2 = (sum + arr[i] - 1) % h;
  int ch1 = sol(i + 1, x1) + (x1 >= l && x1 <= r);
  int ch2 = sol(i + 1, x2) + (x2 >= l && x2 <= r);
  return ret = max(ch1, ch2);
}
int main()
{
  setup();
  cin >> n >> h >> l >> r;
  arr.resize(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  memset(dp, -1, sizeof dp);
  cout << sol();
  return 0;
}