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
    int n = s.size();
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
      if (i + 2 < n)
      {
        if (s[i] == s[i + 2])
        {
          flag = true;
          break;
        }
      }
      if (i + 3 < n)
      {
        if (s[i] == s[i + 3] && s[i + 1] == s[i + 2])
        {
          flag = true;
          break;
        }
      }
      if (i + 1 < n)
      {
        if (s[i] == s[i + 1])
        {
          flag = true;
          break;
        }
      }
    }
    if (flag)
      cout << "yes" << el;
    else
      cout << "no" << el;
  }
  return 0;
}