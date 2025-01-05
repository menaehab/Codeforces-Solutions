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
int gcd(int a, int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
int main()
{
  setup();
  int t;
  cin >> t;
  while (t--)
  {
    ll n, N;
    cin >> n;
    N = n;
    map<ll, ll> mp;
    vector<pair<ll, ll>> arr;
    for (ll i = 2; i * i <= n; i++)
    {
      while (n % i == 0)
      {
        mp[i]++;
        n /= i;
      }
    }
    if (n > 1)
      mp[n]++;
    for (auto [x, y] : mp)
    {
      arr.push_back({x, y});
    }
    sort(all(arr), [](pair<ll, ll> a, pair<ll, ll> b)
         { return a.second > b.second; });
    if (arr.empty() || arr[0].second == 1)
      cout << 1 << el << N << el;
    else
    {
      cout << arr[0].second << el;
      for (int i = 0; i < arr[0].second - 1; i++)
      {
        cout << arr[0].first << " ";
        N /= arr[0].first;
      }
      cout << N << el;
    }
  }
  return 0;
}