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
struct st
{
  ll a, b, p;
};
vector<st> arr;
const ll N = 4e5 + 5;
ll dp[N];
vector<pair<ll, ll>> pr[N];
int n, idx;
ll sol(int i = 0)
{
  if (i >= n)
    return 0;
  ll &ret = dp[i];
  if (~ret)
    return ret;
  ret = sol(i + 1);
  for (auto it : pr[i])
  {
    ret = max(ret, sol(it.first + 1) + it.second);
  }
  return ret;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cin >> n;
  arr.resize(n);
  map<ll, ll> mp;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i].a >> arr[i].b >> arr[i].p;
    mp[arr[i].a];
    mp[arr[i].b];
  }
  idx = 1;
  for (auto &it : mp)
  {
    it.second = idx++;
  }
  for (int i = 0; i < n; i++)
  {
    arr[i].a = mp[arr[i].a];
    arr[i].b = mp[arr[i].b];
  }
  for (int i = 0; i < n; i++)
    pr[arr[i].a].push_back({arr[i].b, arr[i].p});
  n = idx;
  memset(dp, -1, sizeof dp);
  cout << sol();
  return 0;
}