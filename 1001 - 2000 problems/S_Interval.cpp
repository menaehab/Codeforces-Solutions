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
  double x;
  cin >> x;
  if (x >= 0 && x <= 25)
  {
    cout << "Interval [0,25]";
  }
  else if (x > 25 && x <= 50)
  {
    cout << "Interval (25,50]";
  }
  else if (x > 50 && x <= 75)
  {
    cout << "Interval (50,75]";
  }
  else if (x > 75 && x <= 100)
  {
    cout << "Interval (75,100]";
  }
  else if (x < 0)
  {
    cout << "Out of Intervals";
  }
  else if (x > 100)
  {
    cout << "Out of Intervals";
  }
  return 0;
}