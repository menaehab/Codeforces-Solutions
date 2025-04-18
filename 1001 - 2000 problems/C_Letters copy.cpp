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
  int n, m;
  cin >> n >> m;
  vector<ll> arr(n), pfx(n + 1);
  for (ll &x : arr)
    cin >> x;
  for (int i = 1; i <= n; i++)
  {
    pfx[i] = arr[i - 1] + pfx[i - 1];
  }
  while (m--)
  {
    ll x;
    cin >> x;
    ll idx = lower_bound(all(pfx), x) - pfx.begin();
    cout << idx << " " << x - pfx[idx - 1] << el;
  }
  return 0;
}