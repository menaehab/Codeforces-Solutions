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
const int mod = 1073741824;

int divisorsCount(int n)
{
  int cnt = 0;
  for (ll i = 1; i * i <= n; i++)
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
  int a, b, c;
  cin >> a >> b >> c;
  map<ll, int> mp;
  ll ans = 0;
  for (int i = 1; i <= a; i++)
  {
    for (int j = 1; j <= b; j++)
    {
      for (int k = 1; k <= c; k++)
      {
        ll x = i * j * k;
        if (!mp[x])
          mp[x] = divisorsCount(x);

        ans = (ans + mp[x]) % mod;
      }
    }
  }
  cout << ans << el;
  return 0;
}