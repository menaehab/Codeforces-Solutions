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
};
ll n, k;
vector<int> arr;
bool can(ll m)
{
  ll sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += m / arr[i];
    if (sum >= k)
      return true;
  }
  return false;
}
int main()
{
  setup();
  cin >> n >> k;
  arr.resize(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  ll l = 0, r = 1e18, ans = 0;
  while (l <= r)
  {
    ll m = (l + r) / 2;
    if (can(m))
    {
      ans = m;
      r = m - 1;
    }
    else
    {
      l = m + 1;
    }
  }
  cout << ans;
  return 0;
}