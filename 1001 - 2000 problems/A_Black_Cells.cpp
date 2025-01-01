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
    int n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    if (n == 1)
      cout << 1 << el;
    else if (n & 1)
    {
      ll l = 0, r = 1e18, res = -1;
      while (l <= r)
      {
        ll mid = (l + r) / 2;
        bool f = true;
        int cnt = 0;
        for (int i = 0; i < n; i += 2)
        {
          if (arr[i + 1] - arr[i] > mid)
          {
            cnt++;
            i--;
            if (cnt > 1)
            {
              f = false;
              break;
            }
          }
        }
        if (f)
        {
          res = mid;
          r = mid - 1;
        }
        else
        {
          l = mid + 1;
        }
      }
      cout << res << el;
    }
    else
    {
      ll mx = INT_MIN;
      for (int i = 0; i < n; i += 2)
      {
        mx = max(arr[i + 1] - arr[i], mx);
      }
      cout << mx << el;
    }
  }
  return 0;
}