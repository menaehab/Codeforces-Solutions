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
    int n;
    cin >> n;
    vector<int> a, b;
    for (int i = 0; i < n; i++)
    {
      if (i & 1)
      {
        int x;
        cin >> x;
        b.push_back(x);
      }
      else
      {
        int x;
        cin >> x;
        a.push_back(x);
      }
    }
    bool f = true;
    if (a.size() > 0)
    {
      for (int i = 0; i < a.size() - 1; i++)
      {
        if ((a[i] & 1) != (a[i + 1] & 1))
        {
          f = false;
          break;
        }
      }
    }
    if (b.size() > 0)
    {
      for (int i = 0; i < b.size() - 1; i++)
      {
        if ((b[i] & 1) != (b[i + 1] & 1))
        {
          f = false;
          break;
        }
      }
    }
    if (f)
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