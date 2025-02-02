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
    ll n, m, k, ans = 0;
    cin >> n >> m >> k;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
      if (arr[i] < m)
        continue;
      if (arr[i] % m == 0)
        ans += arr[i] / m;
      else
      {
        ll x = arr[i] / m, y = 1;
        while (arr[i] - x * m < k && arr[i] - y * m >= k && x > 0 && y < x)
        {
          x--;
          y++;
        }
        if (arr[i] - x * m >= k)
          ans += x;
        else
          ans += y - 1;
      }
    }
    cout << ans << el;
  }
  return 0;
}