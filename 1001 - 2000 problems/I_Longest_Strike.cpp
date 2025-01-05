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
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      mp[x]++;
    }
    vector<int> arr;
    for (auto [x, y] : mp)
    {
      if (y >= k)
      {
        arr.push_back(x);
      }
    }
    if (arr.empty())
    {
      cout << -1 << el;
      continue;
    }
    sort(all(arr));
    int mx = 0, l = -1, r = -1, s = 0;
    for (int i = 1; i < arr.size(); i++)
    {
      if (arr[i] != arr[i - 1] + 1)
        s = i;
      int tmp = arr[i] - arr[s] + 1;
      if (tmp > mx)
      {
        mx = tmp;
        l = arr[s];
        r = arr[i];
      }
    }
    cout << l << " " << r << el;
  }
  return 0;
}