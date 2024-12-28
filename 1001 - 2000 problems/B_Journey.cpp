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
  ll t;
  cin >> t;
  while (t--)
  {
    ll n, a, b, c;
    cin >> n >> a >> b >> c;
    ll l = 0, r = n + 1;
    while (r > l + 1)
    {
      ll mid = (l + r) / 2;
      ll x = mid / 3;
      ll sum = x * a + x * b + x * c;
      if (mid % 3 >= 1)
        sum += a;
      if (mid % 3 >= 2)
        sum += b;
      if (sum >= n)
        r = mid;
      else
        l = mid;
    }
    cout << l + 1 << el;
  }
  return 0;
}