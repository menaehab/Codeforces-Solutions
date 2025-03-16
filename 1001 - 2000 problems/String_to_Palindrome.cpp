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
string s;
int dp[1005][1005];
int sol(int l = 0, int r = s.size() - 1)
{
  if (l >= r)
    return 0;
  int &ret = dp[l][r];
  if (~ret)
    return ret;
  int ch1 = 1e9;
  if (s[l] == s[r])
    ch1 = sol(l + 1, r - 1);
  int ch2 = sol(l, r - 1) + 1;
  int ch3 = sol(l + 1, r) + 1;
  int ch4 = sol(l + 1, r - 1) + 1;
  return ret = min({ch1, ch2, ch3, ch4});
}
int main()
{
  setup();
  int t, ans = 1;
  cin >> t;
  while (t--)
  {
    cin >> s;
    memset(dp, -1, sizeof dp);
    cout << "Case " << ans++ << ": " << sol() << el;
  }
  return 0;
}