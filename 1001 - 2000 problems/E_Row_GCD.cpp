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
ll gcd(ll a, ll b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
int main()
{
  setup();
  ll n, m;
  cin >> n >> m;
  vector<ll> a(n), b(m);
  for (ll i = 0; i < n; i++)
    cin >> a[i];
  for (ll i = 0; i < m; i++)
    cin >> b[i];
  sort(all(a));
  ll g = 0;
  for (ll i = 1; i < n; i++)
    g = gcd(g, a[i] - a[0]);
  for (ll i = 0; i < m; i++)
    cout << gcd(g, a[0] + b[i]) << " ";
  return 0;
}