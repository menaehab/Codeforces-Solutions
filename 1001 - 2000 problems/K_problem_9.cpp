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
    string s;
    cin >> s;
    bool f = false;
    for (int i = 0; i < s.size() - 1; i++)
    {
      if (s[i] == '1')
        f = true;
    }
    if (s == "1")
      cout << "NO" << el;
    else
    {
      if (f)
        cout << "YES" << el;
      else
        cout << "NO" << el;
    }
  }
  return 0;
}