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
bool isPrime(ll n)
{
  if (n <= 1)
    return false;
  if (n != 2 && n % 2 == 0)
    return false;
  for (long long i = 3; i * i <= n; i += 2)
    if (n % i == 0)
      return false;
  return true;
}
int main()
{
  setup();
  int t;
  cin >> t;
  while (t--)
  {
    ll n;
    cin >> n;
    ll i = n + 1, x;
    while (true)
    {
      if (isPrime(i))
      {
        x = i;
        break;
      }
      i++;
    }
    i = x + n;
    while (true)
    {
      if (isPrime(i))
      {
        cout << x * i << el;
        break;
      }
      i++;
    }
  }

  return 0;
}