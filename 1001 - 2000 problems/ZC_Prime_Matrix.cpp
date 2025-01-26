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
const int sz = 1e6 + 10;
bool composite[sz];
vector<ll> primes;
void sieve()
{
  composite[0] = composite[1] = true;
  for (int i = 2; i * i <= sz; i++)
  {
    if (!composite[i])
    {
      for (int j = i * i; j <= sz; j += i)
      {
        composite[j] = true;
      }
    }
  }
}
void linearSieve(int n)
{
  composite[0] = composite[1] = true;
  for (int i = 2; i <= n; i++)
  {
    if (!composite[i])
    {
      primes.push_back(i);
    }
    for (int j = 0; j < primes.size(); j++)
    {
      if (i * primes[j] > n)
      {
        break;
      }
      composite[i * primes[j]] = true;
      if (i % primes[j] == 0)
      {
        break;
      }
    }
  }
}
int main()
{
  setup();
  sieve();
  linearSieve(1e6);
  ll n, m;
  cin >> n >> m;
  vector<vector<ll>> arr(n, vector<ll>(m));
  vector<vector<ll>> cnt(n, vector<ll>(m));
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> arr[i][j];
      int x = *lower_bound(all(primes), arr[i][j]);
      cnt[i][j] = x - arr[i][j];
    }
  }
  ll mn1 = INT_MAX, mn2 = INT_MAX;
  for (int i = 0; i < n; i++)
  {
    ll tmp = 0;
    for (int j = 0; j < m; j++)
    {
      tmp += cnt[i][j];
    }
    mn1 = min(mn1, tmp);
  }
  for (int j = 0; j < m; j++)
  {
    ll tmp = 0;
    for (int i = 0; i < n; i++)
    {
      tmp += cnt[i][j];
    }
    mn2 = min(mn2, tmp);
  }
  cout << min(mn1, mn2);

  return 0;
}
