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

int findFirstBit1(int n)
{
  int idx = 0;
  while ((n & (1 << idx)) == 0)
  {
    idx++;
  }
  return (1 << idx);
}
int main()
{
  setup();
  int n, k;
  cin >> n >> k;
  vector<pair<int, int>> arr;
  vector<int> ans;
  ll sum = 0;
  for (int i = 1; i <= n; i++)
  {
    arr.push_back({findFirstBit1(i), i});
  }
  sort(allr(arr));
  for (int i = 0; i < arr.size(); i++)
  {
    if (sum + arr[i].first <= k)
    {
      ans.push_back(arr[i].second);
      sum += arr[i].first;
    }
    if (sum == k)
    {
      break;
    }
  }
  if (sum != k)
  {
    cout << -1 << el;
  }
  else
  {
    cout << ans.size() << el;
    for (int i = 0; i < ans.size(); i++)
    {
      cout << ans[i] << " ";
    }
  }
  return 0;
}