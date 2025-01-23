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

const int sz = 3001;
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
  int n, ans = 0;
  cin >> n;
  linearSieve(n);
  for (int i = 2; i <= n; i++)
  {
    int cnt = 0;
    for (auto x : primes)
    {
      if (x > i)
        break;
      if (i % x == 0)
        cnt++;
    }
    if (cnt == 2)
    {
      ans++;
    }
    cnt = 0;
  }
  cout << ans;

  return 0;
}