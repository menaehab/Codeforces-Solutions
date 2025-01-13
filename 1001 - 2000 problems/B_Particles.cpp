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
    ll n, e = 0, o = 0;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
      cin >> arr[i];
    for (int i = 0; i < n; i++)
    {
      if (arr[i] > 0)
      {
        if (i & 1)
          o += arr[i];
        else
          e += arr[i];
      }
    }
    ll mx = *max_element(all(arr));
    if (mx < 0)
      cout << mx << el;
    else
      cout << max(o, e) << el;
  }

  return 0;
}