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
const ll N = 1e5 + 5;
ll n, mx, dp[N];
vector<ll> arr;
map<ll, ll> mp;
ll sol(ll i)
{
  if (dp[i] != -1)
    return dp[i];
  if (i > mx)
    return 0;
  return dp[i] = max(sol(i + 1), sol(i + 2) + i * mp[i]);
}
int main()
{
  setup();
  cin >> n;
  arr.resize(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    mp[arr[i]]++;
  }
  mx = *max_element(all(arr));
  memset(dp, -1, sizeof dp);
  cout << sol(1) << el;
  return 0;
}