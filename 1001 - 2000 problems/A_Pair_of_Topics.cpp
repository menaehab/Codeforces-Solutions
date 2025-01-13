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
  ll n, ans = 0;
  cin >> n;
  vector<ll> a(n), b(n), c(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i = 0; i < n; i++)
    cin >> b[i];
  for (int i = 0; i < n; i++)
  {
    c[i] = b[i] - a[i];
  }
  sort(all(c));
  for (int i = 0; i < n; i++)
  {
    int idx = lower_bound(c.begin() + i + 1, c.end(), -c[i]) - c.begin();
    ans += idx - i - 1;
  }
  cout << ans << el;

  return 0;
}

/*
a[i] - b[i] > b[j] - a[j]
-(b[i] - a[i]) > (b[j] - a[j])
-c[i] > c[j]
*/