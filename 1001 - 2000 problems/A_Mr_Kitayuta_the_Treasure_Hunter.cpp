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
int n, k, mx = 0;
map<int, int> mp;
const int N = 30005;
int dp[N][605];

int sol(int i, int d)
{
  if (i > mx)
    return 0;
  int D = d - k + 300;
  int &ret = dp[i][D];
  if (~ret)
    return ret;
  int ch1 = 0, ch2 = 0, ch3 = 0;
  if (d - 1 > 0)
    ch1 = sol(i + d - 1, d - 1);
  ch2 = sol(i + d, d);
  ch3 = sol(i + d + 1, d + 1);
  return ret = max({ch1, ch2, ch3}) + mp[i];
}
int main()
{
  setup();
  cin >> n >> k;
  for (int i = 0, x; i < n; i++)
  {
    cin >> x;
    mp[x]++;
    mx = max(mx, x);
  }
  memset(dp, -1, sizeof dp);
  cout << sol(k, k);
  return 0;
}