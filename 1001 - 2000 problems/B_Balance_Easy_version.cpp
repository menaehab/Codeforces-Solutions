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
  int t;
  cin >> t;
  map<ll, ll> mp, m;
  while (t--)
  {
    char c;
    ll n;
    cin >> c >> n;
    if (c == '+')
      mp[n]++;
    else
    {
      ll x = n;
      if (m[x] == 0)
        m[x] = x;
      while (mp[m[x]])
        m[x] += x;
      cout << m[x] << el;
    }
  }
  return 0;
}