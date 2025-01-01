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
  vector<string> arr;
  int n = 0;
  while (getline(cin, s))
  {
    n = (s.size() > n) ? s.size() : n;
    arr.push_back(s);
  }
  string l(n + 2, '*');
  cout << l << el;
  bool f = true;
  for (int i = 0; i < arr.size(); i++)
  {
    string x((n - arr[i].size()) / 2, ' ');
    string y(((n - arr[i].size()) + 1) / 2, ' ');
    if ((n - arr[i].size()) & 1)
    {
      if (!f)
      {
        swap(x, y);
      }
      f = !f;
    }
    cout << '*' << x << arr[i] << y << '*' << el;
  }
  cout << l << el;
  return 0;
}