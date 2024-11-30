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
  int n, l, r, x, ans = 0;
  cin >> n >> l >> r >> x;
  vector<int> arr(n);
  for (int &i : arr)
    cin >> i;
  for (int i = 0; i < (1 << n); i++)
  {
    int sum = 0, mx = 0, mn = 1e9, cnt = 0;
    for (int j = 0; j < n; j++)
    {
      if ((i >> j) & 1)
      {
        cnt++;
        sum += arr[j];
        mx = max(mx, arr[j]);
        mn = min(mn, arr[j]);
      }
    }
    if (cnt >= 2 && sum >= l && sum <= r && mx - mn >= x)
    {
      ans++;
    }
  }
  cout << ans;
  return 0;
}