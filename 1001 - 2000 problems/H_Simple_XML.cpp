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
  int n = s.size(), tmp = 0;
  for (int i = 0; i < n - 2; i++)
  {
    if (s[i] == '<')
    {
      string c;
      bool flag1 = false, flag2 = false;
      if (s[i + 1] == '/')
      {
        flag2 = true;
        c = s.substr(i, 4);
      }
      else
      {
        flag1 = true;
        c = s.substr(i, 3);
      }
      tmp -= flag2 ? 1 : 0;
      cout << string(tmp * 2, ' ') << c << el;
      tmp += flag1 ? 1 : 0;
    }
  }
  return 0;
}