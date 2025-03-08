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
ll x, y;
int n;
struct st
{
  ll o, ni, w;
};
vector<st> arr;
ll dp[1005][25][85];
ll sol(ll i = 0, ll sumO = 0, ll sumNi = 0)
{
  if (i == n)
    return (sumO >= x && sumNi >= y) ? 0 : 1e9;
  ll &ret = dp[i][sumO][sumNi];
  if (ret != -1)
    return ret;
  ll ch1 = sol(i + 1, sumO, sumNi);
  ll ch2 = sol(i + 1, min(sumO + arr[i].o, x), min(sumNi + arr[i].ni, y)) + arr[i].w;
  return ret = min(ch1, ch2);
}
int main()
{
  setup();
  int t;
  cin >> t;
  while (t--)
  {
    cin >> x >> y >> n;
    arr.resize(n);
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i].o >> arr[i].ni >> arr[i].w;
    }
    memset(dp, -1, sizeof dp);
    cout << sol() << el;
    arr.clear();
  }
  return 0;
}