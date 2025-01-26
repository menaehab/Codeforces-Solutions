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
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> arr(n), x, y;
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    for (int i = max(l, 1) - 1; i < n; i++)
    {
      x.push_back(arr[i]);
    }
    for (int i = 0; i < r; i++)
    {
      y.push_back(arr[i]);
    }
    sort(all(x));
    sort(all(y));
    ll ans1 = 0, ans2 = 0;
    for (int i = 0; i < r - l + 1; i++)
    {
      ans1 += x[i];
      ans2 += y[i];
    }
    cout << min(ans1, ans2) << el;
  }
  return 0;
}