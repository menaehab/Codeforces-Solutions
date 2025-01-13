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
    vector<vector<ll>> arr(n);
    vector<pair<ll, ll>> pr(n);
    for (int i = 0; i < n; i++)
    {
      int k;
      cin >> k;
      arr[i].resize(k);
      ll mx = 0;
      for (int j = 0; j < k; j++)
      {
        cin >> arr[i][j];
        mx = max(mx, arr[i][j] - j + 1);
      }
      pr[i].first = mx;
      pr[i].second = mx + k;
    }
    sort(all(pr));
    ll mx = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
      if (mx < pr[i].first)
      {
        ans += pr[i].first - mx;
        mx = pr[i].first;
      }
      mx += pr[i].second - pr[i].first;
    }
    cout << ans << el;
  }
  return 0;
}