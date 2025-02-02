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
    ll l, r, k;
    cin >> l >> r >> k;
    if (l == r)
    {
      if (l > 1)
        cout << "YES" << el;
      else
        cout << "NO" << el;
    }
    else
    {
      ll odd = (r - l) / 2;
      if (l & 1 || r & 1)
        odd++;
      if (k >= odd)
        cout << "YES" << el;
      else
        cout << "NO" << el;
    }
  }
  return 0;
}