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
    int n = s.length();
    int z = 0, o = 0;
    for (int i = 0; i < n; i++)
    {
      if (s[i] == '0')
        z++;
      else
        o++;
    }
    if (z == 0)
    {
      cout << 0 << el;
    }
    else if (o == 0)
    {
      cout << 1 << el;
    }
    else
    {
      bool flag = false;
      for (int i = 0; i < n; i++)
      {
        if (s[i] == '0')
        {
          if (i == 0 || s[i - 1] == '1')
          {
            if (flag)
            {
              flag = false;
              break;
            }
            flag = true;
          }
        }
      }
      cout << (flag ? 1 : 2) << el;
    }
  }
  return 0;
}