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
vector<ll> arr(22);
ll solve(ll i = 1, ll sum = arr[0])
{
  if (i == n)
  {
    if (sum == 0)
      return 0;
    else
      return 21;
  }
  ll x = arr[i], y = arr[i];
  ll ans1 = solve(i + 1, sum + arr[i]);
  ll ans2 = solve(i + 1, sum - arr[i]) + 1;
  return min(ans1, ans2);
}
int main()
{
  setup();
  cin >> n;
  cin >> arr[0];
  for (int i = 1; i < n; i++)
  {
    char c;
    cin >> c;
    cin >> arr[i];
    if (c == '-')
      arr[i] *= -1;
  }
  ll ans = solve();
  if (ans > 20)
    cout << -1;
  else
    cout << ans;
  return 0;
}