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
vector<int> arr;
int binarySearch(int l, int r, int x)
{
  if (r >= l)
  {
    int m = l + (r - l) / 2;
    if (arr[m] == x)
    {
      return m + 1;
    }
    else if (arr[m] > x)
    {
      return binarySearch(l, m - 1, x);
    }
    else
    {
      return binarySearch(m + 1, r, x);
    }
  }
  return -1;
}
int main()
{
  setup();
  int n;
  cin >> n;
  arr.resize(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  int q;
  cin >> q;
  while (q--)
  {
    int x;
    cin >> x;
    cout << binarySearch(0, n - 1, x) << el;
  }

  return 0;
}