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
bool comp(string a, string b)
{
  return a.size() < b.size();
}
int main()
{
  setup();
  int n;
  cin >> n;
  vector<string> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  bool flag = true;
  sort(all(arr), comp);
  for (int i = 1; i < n; i++)
  {
    if (arr[i].find(arr[i - 1]) == string::npos)
    {
      cout << "NO" << el;
      return 0;
    }
  }

  cout << "YES" << el;
  for (auto x : arr)
  {
    cout << x << el;
  }

  return 0;
}