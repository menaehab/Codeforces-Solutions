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
bool f = 0;
void sol(ll idx = 1, ll sum = arr[0])
{
  if (f)
    return;
  if (idx == n)
  {
    if (sum == k)
      f = 1;
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
  if (f)
    cout << "YES" << el;
  else
    cout << "NO" << el;
  return 0;
}