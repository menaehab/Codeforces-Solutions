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
  int n, one = 0, two = 0;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    if (x == 1)
      one++;
    else if (x == 2)
      two++;
  }
  if (two > 0)
  {
    cout << 2 << " ";
    two--;
  }
  if (one > 0)
  {
    cout << 1 << " ";
    one--;
  }
  while (two > 0)
  {
    cout << 2 << " ";
    two--;
  }
  while (one > 0)
  {
    cout << 1 << " ";
    one--;
  }
  return 0;
}