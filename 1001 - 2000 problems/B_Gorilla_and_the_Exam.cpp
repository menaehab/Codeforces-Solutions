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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      mp[a[i]]++;
    }
    vector<pair<int, int>> arr;
    for (auto i : mp)
    {
      arr.push_back(i);
    }
    vector<int> cnt;
    for (auto i : arr)
    {
      cnt.push_back(i.second);
    }
    sort(all(cnt));
    int ans = cnt.size();
    for (int i = 0; i < cnt.size(); i++)
    {
      if (k >= cnt[i])
      {
        k -= cnt[i];
        ans--;
      }
      else
        break;
    }
    cout << max(ans, 1) << el;
  }
  return 0;
}