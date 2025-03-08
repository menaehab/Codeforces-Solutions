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
vector<ll> arr;
ll dp[200005][3];
ll sol(ll i = 0, ll sum = 0)
{
  if (i == n)
    return 0;
  ll &ret = dp[i][sum];
  if (ret)
    return ret;
  ll ch1 = sol(i + 1, sum % 2);
  ll ch2 = sol(i + 1, (sum + 1) % 2) + (((sum + 1) % 2 == 0) ? arr[i] * 2 : arr[i]);
  return ret = max(ch1, ch2);
}
int main()
{
  setup();
  cin >> n;
  arr.resize(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  cout << sol();
  return 0;
}