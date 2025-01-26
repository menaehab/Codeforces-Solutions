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

vector<ll> divisors(ll n)
{
  vector<ll> divs;
  for (ll i = 1; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      divs.push_back(i);
      if (i * i != n)
        divs.push_back(n / i);
    }
  }
  return divs;
}
int main()
{
  setup();
  int a, b;
  cin >> a >> b;
  vector<ll> arr = divisors(gcd(a, b));
  int n;
  cin >> n;
  while (n--)
  {
    ll l, r, ans = -1;
    cin >> l >> r;
    for (auto x : arr)
    {
      if (l <= x && x <= r)
        ans = max(ans, x);
    }
    cout << ans << el;
  }
  return 0;
}