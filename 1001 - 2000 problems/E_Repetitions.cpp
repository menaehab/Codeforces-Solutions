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
  string s;
  cin >> s;
  int n = s.size();
  int ans = 1;
  int mx = 1;
  for (int i = 0; i < n - 1; i++)
  {
    if (s[i] == s[i + 1])
      mx++;
    else
    {
      ans = max(ans, mx);
      mx = 1;
    }
  }
  cout << max(ans, mx) << el;
  return 0;
}