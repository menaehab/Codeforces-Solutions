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
  int n;
  cin >> n;
  int arr[105][105];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; ++j)
    {
      cin >> arr[i][j];
    }
  }
  int x = 0;
  int y = 0;
  for (int i = 0; i < n; i++)
  {
    x += arr[i][i];
  }
  for (int i = 0; i < n; i++)
  {
    y += arr[i][n - 1 - i];
  }
  int res = abs(x - y);
  cout << res << el;
  return 0;
}