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
  ll n, ans = 0;
  cin >> n;

  for (ll i = n; i * i * i > ans; i--)
  {
    for (ll j = i; j * j * i > ans; j--)
    {
      for (ll k = j; i * j * k > ans; k--)
      {
        if (gcd(i, j) == 1 && gcd(i, k) == 1 && gcd(j, k) == 1)
          ans = i * j * k;
      }
    }
  }
  cout << ans << el;

  return 0;
}