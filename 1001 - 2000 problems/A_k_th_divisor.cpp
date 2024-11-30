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
int main()
{
  setup();
  ll n, k;
  cin >> n >> k;
  vector<ll> v;
  for (int i = 1; i <= sqrt(n); i++)
  {
    if (n % i == 0)
    {
      if (i == sqrt(n))
        v.push_back(i);
      else
      {
        v.push_back(i);
        v.push_back(n / i);
      }
    }
  }
  sort(all(v));
  if (k > v.size())
    cout << -1;
  else
    cout << v[k - 1];
  return 0;
}