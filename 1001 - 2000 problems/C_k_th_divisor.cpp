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
  ll n, k;
  cin >> n >> k;
  vector<ll> divs = divisors(n);
  sort(all(divs));
  if (k > divs.size())
    cout << -1;
  else
    cout << divs[k - 1];

  return 0;
}