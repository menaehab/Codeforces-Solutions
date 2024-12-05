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
  ll l, r;
  cin >> l >> r;
  ll ans = 0;
  for (ll i = 0; (1LL << (i != 0 ? i : 1) - 1) <= r; i++)
    for (ll j = 0; j < i - 1; j++)
    {
      ll x = (1LL << i) - 1;
      ll y = (1LL << j);
      x -= y;
      if (x >= l && x <= r)
        ans++;
    }
  cout << ans << el;
  return 0;
}