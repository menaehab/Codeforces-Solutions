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
ll n, k;
vector<ll> arr;
int ans = 0;
void sol(int idx = 1, ll sum = arr[0])
{
  if (idx == n)
  {
    if (sum == k)
      ans++;
    return;
  }
  sol(idx + 1, sum - arr[idx]);
  sol(idx + 1, sum + arr[idx]);
}
int main()
{
  setup();
  cin >> n >> k;
  arr.resize(n);
  for (auto &x : arr)
    cin >> x;
  sol();
  cout << ans;
  return 0;
}