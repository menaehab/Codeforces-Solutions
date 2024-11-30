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
ll setBit1(ll x, ll idx)
{
  return x | (1 << idx);
}
int main()
{
  setup();
  int t;
  cin >> t;
  while (t--)
  {
    ll x, y;
    cin >> x >> y;
    ll ans = x;
    for (ll i = 0; i <= 64; i++)
    {
      ll tmp = setBit1(ans, i);
      if (tmp <= y)
        ans = tmp;
      else
        break;
    }
    cout << ans << el;
  }
  return 0;
}
