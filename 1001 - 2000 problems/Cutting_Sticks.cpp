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
int dp[55][55];
vector<int> arr;
int sol(int l = 0, int r = n + 1)
{
  if (l + 1 == r)
    return 0;
  int &ret = dp[l][r];
  if (~ret)
    return ret;
  int ans = 1e9;
  for (int i = l + 1; i < r; i++)
  {
    ans = min(ans, arr[r] - arr[l] + sol(l, i) + sol(i, r));
  }
  return ret = ans;
}
int main()
{
  setup();
  int x;
  while (cin >> x)
  {
    if (x == 0)
      break;
    cin >> n;
    arr.resize(n + 2);
    arr[0] = 0;
    for (int i = 1; i <= n; i++)
      cin >> arr[i];
    arr[n + 1] = x;
    memset(dp, -1, sizeof dp);
    cout << "The minimum cutting is " << sol() << "." << el;
  }
  return 0;
}