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
    int n, k, cnt = 0;
    string s;
    cin >> n >> k >> s;
    map<int, int> mp;
    for (char c : s)
      mp[c]++;
    int res = 0, off = 0;
    for (int i = 0; i < 26; i++)
    {
      int d = min(mp['a' + i], mp['A' + i]);
      res += d;
      mp['a' + i] -= d;
      mp['A' + i] -= d;
      off += mp['a' + i] / 2;
      off += mp['A' + i] / 2;
    }
    cout << res + min(off, k) << el;
  }
  return 0;
}