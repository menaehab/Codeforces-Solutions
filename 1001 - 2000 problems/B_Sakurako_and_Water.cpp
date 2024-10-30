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
  int t;
  cin >> t;
  while (t--)
  {
    ll n, ans = 0;
    cin >> n;
    vector<vector<ll>> arr(n + 2, vector<ll>(n + 2));
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        cin >> arr[i][j];
      }
    }
    for (int x = n - 1; x >= 0; x--)
    {
      ll i = 0, j = x, mn = 0;
      for (; i < n && j < n; i++, j++)
      {
        mn = min(mn, arr[i][j]);
      }
      ans += mn;
    }
    for (int x = 1; x < n; x++)
    {
      ll i = x, j = 0, mn = 0;
      for (; i < n && j < n; i++, j++)
      {
        mn = min(mn, arr[i][j]);
      }
      ans += mn;
    }
    cout << -1 * ans << el;
  }

  return 0;
}