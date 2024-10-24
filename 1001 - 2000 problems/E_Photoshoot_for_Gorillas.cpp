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
    int n, m, k;
    cin >> n >> m >> k;
    int w;
    cin >> w;
    vector<ll> arr(w), pfx(n * m);
    for (int i = 0; i < w; i++)
    {
      cin >> arr[i];
    }
    sort(allr(arr));
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        int idx = i * m + j;
        int t = max(0, i - k + 1), b = min(i, n - k), l = max(0, j - k + 1), r = min(j, m - k);
        pfx[idx] = (b - t + 1) * (r - l + 1);
      }
    }
    sort(allr(pfx));
    ll ans = 0;
    for (int i = 0; i < min(w, (int)pfx.size()); i++)
    {
      ans += arr[i] * pfx[i];
    }
    cout << ans << el;
  }

  return 0;
}