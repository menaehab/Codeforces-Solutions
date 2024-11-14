#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <iomanip>
#include <string>
#include <set>
#include <queue>
#include <unordered_map>
#include <unordered_set>
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
ll can(ll mid, ll n, vector<ll> &arr, ll k)
{
  ll sum = 0;
  for (int i = n / 2; i < n; i++)
  {
    if (arr[i] < mid)
      sum += mid - arr[i];
  }
  return sum <= k;
}
int main()
{
  setup();
  ll n, k;
  cin >> n >> k;
  vector<ll> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  sort(all(arr));
  ll l = arr[n / 2], r = arr[n / 2] + k, res = arr[n / 2];
  while (l <= r)
  {
    int mid = (l + r) / 2;
    if (can(mid, n, arr, k))
    {
      res = mid;
      l = mid + 1;
    }
    else
      r = mid - 1;
  }
  cout << res;
  return 0;
}