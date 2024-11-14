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
  int n, cnt = 0;
  cin >> n;
  stack<string> stk;
  for (int i = 0; i < n; i++)
  {
    string s;
    cin >> s;
    if ((s != "Header" && i == 0) || (i == n - 1 && s != "EndHeader") || cnt > 1)
    {
      cout << "WA";
      return 0;
    }
    if (s == "Header")
      cnt++;

    if (stk.empty())
    {
      stk.push(s);
    }
    else
    {
      if ("End" + stk.top() == s)
      {
        stk.pop();
      }
      else
      {
        stk.push(s);
      }
    }
  }
  if (stk.empty())
    cout << "ACC";
  else
    cout << "WA";
  return 0;
}