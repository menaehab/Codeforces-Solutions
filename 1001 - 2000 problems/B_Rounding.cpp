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
  if (s[s.size() - 1] - '0' <= 5)
    s[s.size() - 1] = '0';
  else
  {
    if (s.size() == 1)
      s = "10";
    else
    {
      if (s[s.size() - 2] != '9')
      {
        s[s.size() - 2] = s[s.size() - 2] + 1;
        s[s.size() - 1] = '0';
      }
      else
      {
        string tmp = "0";
        bool f = false;
        for (int i = s.size() - 2; i >= 0; i--)
        {
          if (s[i] == '9' && !f)
            tmp += "0";
          else if (s[i] != '9' && !f)
          {
            tmp += s[i] + 1;
            f = true;
          }
          else
            tmp += s[i];
        }
        reverse(all(tmp));
        if (tmp[0] == '0')
          tmp = "1" + tmp;
        s = tmp;
      }
    }
  }
  cout << s << el;
  return 0;
}