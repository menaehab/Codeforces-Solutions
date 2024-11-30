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
    string s, x;
    ll n, res = 0;
    cin >> n >> s >> x;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
      if (flag)
      {
        if (s[i] == '1' && x[i] == '1')
          continue;
        res += 2;
        flag = false;
      }
      else
      {
        if (s[i] == '1' && x[i] == '1')
          flag = true;
        if (s[i] == '0' && x[i] == '0')
        {
          if (i < n && s[i + 1] == '1' && x[i + 1] == '1')
            res += 2, i++;
          else
            res++;
        }
        else if (s[i] != x[i])
          res += 2;
      }
    }
    cout << res << el;
  }
  return 0;
}