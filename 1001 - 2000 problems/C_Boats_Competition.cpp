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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];
    unordered_map<int, int> cnt;
    int mx = 0;
    vector<vector<int>> chk(n + 1, vector<int>(200));
    for (int i = 0; i < n - 1; i++)
    {
      for (int j = i + 1; j < n; j++)
      {
        if (!chk[i][a[i] + a[j]] && !chk[j][a[i] + a[j]])
        {
          cnt[a[i] + a[j]]++;
          chk[i][a[i] + a[j]] = true;
          chk[j][a[i] + a[j]] = true;
          mx = max(mx, cnt[a[i] + a[j]]);
        }
      }
    }
    cout << mx << el;
  }
  return 0;
}