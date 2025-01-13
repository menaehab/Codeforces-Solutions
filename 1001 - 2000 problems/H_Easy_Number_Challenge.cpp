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

int divisors(int n)
{
  int cnt = 0;
  for (int i = 1; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      if (n / i == i)
        cnt++;
      else
        cnt = cnt + 2;
    }
  }
  return cnt;
}
int main()
{
  setup();
  ll x, y, z, sum = 0;
  cin >> x >> y >> z;
  ll n = x + y + z;
  unordered_map<ll, ll> mp;
  for (int i = 1; i <= x; i++)
  {
    for (int j = 1; j <= y; j++)
    {
      for (int k = 1; k <= z; k++)
      {
        ll tmp = i * j * k;
        if (mp[tmp])
        {
          sum = (sum + mp[tmp]) % 1073741824;
        }
        else
        {
          ll cnt = divisors(tmp);
          mp[tmp] = cnt;
          sum = (sum + cnt) % 1073741824;
        }
        // cout << cnt << el;
      }
    }
  }
  cout << sum << el;
  return 0;
}