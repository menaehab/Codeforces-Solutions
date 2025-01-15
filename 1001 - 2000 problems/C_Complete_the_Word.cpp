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
  string s, x;
  cin >> s;
  int n = s.size(), k = 0;
  bool f = false;
  for (int i = 0; i <= n - 26; i++)
  {
    x = s.substr(i, 26);
    map<char, int> mp;
    set<char> st;
    k = 0;
    for (int j = 0; j < 26; j++)
    {
      if (x[j] == '?')
        k++;
      else
      {
        mp[x[j]]++;
        st.insert(x[j]);
      }
    }
    if (st.size() + k == 26)
    {
      f = true;
      for (int j = i, l = 0; l < 26; l++, j++)
      {
        if (s[j] == '?')
        {
          for (char c = 'A'; c <= 'Z'; c++)
          {
            if (!mp[c])
            {
              s[j] = c;
              mp[c]++;
              break;
            }
          }
        }
      }
      break;
    }
  }
  if (f)
  {
    for (int i = 0; i < n; i++)
      if (s[i] == '?')
        s[i] = 'A';
    cout << s;
  }
  else
    cout << -1;
  return 0;
}