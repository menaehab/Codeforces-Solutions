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
    int x, y;
    cin >> x >> y;
    int f = abs(x - y);
    if (f == 0)
    {
      cout << "0" << el;
      continue;
    }
    if (x < y)
    {
      if ((y - x) % 2 == 0)
      {
        cout << "2" << el;
      }
      else
      {
        cout << "1" << el;
      }
    }
    else
    {
      if ((x - y) % 2 == 0)
      {
        cout << "1" << el;
      }
      else
      {
        cout << "2" << el;
      }
    }
  }
  return 0;
}