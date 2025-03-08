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
int k, n;
vector<pair<ll, ll>> arr;
ll dp[55][10005];
ll sol(ll i = 0, ll sum = 0)
{
  if (i == n)
    return 0;
  ll &ret = dp[i][sum];
  if (ret != -1)
    return ret;
  int ch1 = 0, ch2 = 0;
  ch1 = sol(i + 1, sum);
  if (sum + arr[i].first <= k)
    ch2 = sol(i + 1, sum + arr[i].first) + arr[i].second;
  return ret = max(ch1, ch2);
}
int main()
{
  setup();
  int t;
  cin >> t;
  while (t--)
  {
    cin >> k >> n;
    arr.resize(n);
    for (int i = 0; i < n; i++)
      cin >> arr[i].first >> arr[i].second;
    memset(dp, -1, sizeof dp);
    cout << "Hey stupid robber, you can get " << sol() << "." << el;
    arr.clear();
  }
  return 0;
}