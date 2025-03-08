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

ll n, w;
vector<pair<ll, ll>> arr;
ll dp[105][(ll)1e5 + 5];
ll sol(ll i, ll val)
{
  if (i == n)
    return (val == 0 ? 0 : INT_MAX);

  ll &ret = dp[i][val];
  if (ret != -1)
    return ret;

  ll op1 = sol(i + 1, val);
  ll op2 = INT_MAX;

  if (val >= arr[i].first)
    op2 = sol(i + 1, val - arr[i].first) + arr[i].second;

  return ret = min(op1, op2);
}
int main()
{
  setup();
  cin >> n >> w;
  arr.resize(n);
  ll mx = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i].second >> arr[i].first;
    mx += arr[i].first;
  }
  memset(dp, -1, sizeof dp);
  for (ll i = mx; i >= 0; --i)
  {
    if (sol(0, i) <= w)
    {
      cout << i;
      break;
    }
  }

  return 0;
}