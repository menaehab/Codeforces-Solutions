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
void sieve(int n)
{
  composite[0] = composite[1] = true;
  for (int i = 2; i * i <= n; i++)
  {
    if (!composite[i])
    {
      for (int j = i * i; j <= n; j += i)
      {
        composite[j] = true;
      }
    }
  }
  for (int i = 2; i <= n; i++)
  {
    if (!composite[i])
    {
      primes.push_back(i);
    }
  }
}
int main()
{
  int n;
  cin >> n;
  sieve(n);
  int res = 0;
  for (int i = 2; i <= n; i++)
  {
    int div = 0, tmp = i;
    for (int p : primes)
    {
      if (tmp % p == 0)
      {
        div++;
        while (tmp % p == 0)
          tmp /= p;
      }
      if (tmp == 1 || div > 2)
        break;
    }
    if (div == 2)
      res++;
  }
  cout << res;
  return 0;
}