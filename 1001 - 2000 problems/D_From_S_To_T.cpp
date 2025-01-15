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
    string s, t, p;
    cin >> s >> t >> p;
    map<char, int> mp1, mp2, mp3;
    for (int i = 0; i < s.size(); i++)
    {
      mp1[s[i]]++;
    }
    for (int i = 0; i < t.size(); i++)
    {
      mp2[t[i]]++;
    }
    for (int i = 0; i < p.size(); i++)
    {
      mp3[p[i]]++;
    }
    for (int i = 0; i < t.size(); i++)
    {
      if (mp1[t[i]] + mp3[t[i]] < mp2[t[i]])
      {
        cout << "NO" << el;
        continue;
      }
    }
    int idx = 0;
    for (int i = 0; i < t.size(); i++)
    {
      if (idx < s.size() && s[idx] == t[i])
      {
        idx++;
      }
    }
    if (idx == s.size())
    {
      cout << "YES" << el;
    }
    else
    {
      cout << "NO" << el;
    }
  }
  return 0;
}