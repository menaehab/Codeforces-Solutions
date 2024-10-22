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
  int n, m;
  cin >> n >> m;
  vector<string> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  map<char, float> mp;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      mp[arr[i][j]]++;
    }
  }
  for (auto &&i : mp)
  {
    cout.precision(2);
    cout << fixed << i.first << ": " << ((float)i.second / (n * m)) * 100 << el;
  }

  return 0;
}