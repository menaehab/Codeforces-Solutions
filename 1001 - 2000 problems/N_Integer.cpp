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

map<ll, ll> m;
void primeFactorsMap(ll n)
{
  for (ll i = 2; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      ll cnt = 0;
      while (n % i == 0)
      {
        n /= i;
        cnt++;
      }
      m[i] += cnt;
    }
  }
  if (n > 1)
    m[n]++;
}
int main()
{
  setup();
  int t;
  cin >> t;
  while (t--)
  {
    m.clear();
    ll n, q;
    cin >> n >> q;
    primeFactorsMap(n);
    while (q--)
    {
      ll k, x;
      cin >> k >> x;
      if (k == 1)
        primeFactorsMap(x);
      else
      {
        bool f = 1;
        for (auto [a, b] : m)
        {
          if (b % x != 0)
          {
            f = 0;
            break;
          }
        }
        if (f)
          cout << "Integer" << el;
        else
          cout << "Not integer" << el;
      }
    }
  }

  return 0;
}