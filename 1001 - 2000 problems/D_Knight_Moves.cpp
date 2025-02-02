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
  char c;
  int n;
  cin >> c >> n;
  int ans = 0;
  if (c + 1 <= 'h' && n + 2 <= 8)
    ans++;
  if (c + 1 <= 'h' && n - 2 >= 1)
    ans++;
  if (c - 1 >= 'a' && n + 2 <= 8)
    ans++;
  if (c - 1 >= 'a' && n - 2 >= 1)
    ans++;
  if (c + 2 <= 'h' && n + 1 <= 8)
    ans++;
  if (c + 2 <= 'h' && n - 1 >= 1)
    ans++;
  if (c - 2 >= 'a' && n + 1 <= 8)
    ans++;
  if (c - 2 >= 'a' && n - 1 >= 1)
    ans++;
  cout << ans << el;
  return 0;
}