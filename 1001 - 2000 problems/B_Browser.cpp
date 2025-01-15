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
  int n, pos, l, r;
  cin >> n >> pos >> l >> r;
  if (l == 1 && r == n)
    cout << 0;
  else if (l == 1)
    cout << abs(pos - r) + 1;
  else if (r == n)
    cout << abs(pos - l) + 1;
  else
    cout << r - l + min(abs(pos - l), abs(pos - r)) + 2;
  return 0;
}