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
  int x, y, m, d;
  cin >> x;
  y = x / 365;
  m = (x - (365 * y)) / 30;
  d = (x % 365) % 30;
  if (y < 0)
  {
    y = 0;
  }
  else if (m < 0)
  {
    m = 0;
  }
  else if (d < 0)
  {
    d = 0;
  }
  cout << y << " years" << el;
  cout << m << " months" << el;
  cout << d << " days" << el;
  return 0;
}