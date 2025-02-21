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
ll n;
const int N = 2e5 + 5;
ll dp[N];
vector<ll> arr;
ll sol(ll i = 0)
{
  if (dp[i] != -1)
    return dp[i];
  if (i == n)
    return 0;
  ll leave = sol(i + 1) + 1;
  ll take = LLONG_MAX;
  if (i + arr[i] < n)
    take = sol(i + arr[i] + 1);
  return dp[i] = min(take, leave);
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
    for (ll &x : arr)
      cin >> x;
    memset(dp, -1, sizeof(dp));
    cout << sol() << el;
  }
  return 0;
}