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
    ll n, k, sum = 0;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
      sum += arr[i];
    }
    if (sum <= k)
    {
      cout << n << el;
      continue;
    }
    ll ans = 0, x = (k + 1) / 2, y = k / 2;
    bool f = false;
    for (int i = 0; i < n; i++)
    {
      if (arr[i] <= x)
      {
        x -= arr[i];
        ans++;
      }
      else
        break;
    }
    for (int i = n - 1; i >= 0; i--)
    {
      if (arr[i] <= y)
      {
        y -= arr[i];
        ans++;
      }
      else
        break;
    }
    cout << ans << el;
  }
  return 0;
}