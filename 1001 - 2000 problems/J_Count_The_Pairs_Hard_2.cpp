#include <iostream>
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
int main()
{
  setup();
  ll n, ans = 0;
  cin >> n;
  vector<ll> arr(n);
  map<ll, ll> mp;
  for (ll i = 0; i < n; i++)
  {
    cin >> arr[i];
    mp[arr[i]]++;
  }
  ll sum = *max_element(all(arr)) + *min_element(all(arr));
  for (ll i = 0; i < n; i++)
  {
    mp[arr[i]]--;
    if (mp[sum - arr[i]] > 0)
    {
      ans += mp[sum - arr[i]];
    }
  }
  cout << ans;
  return 0;
}