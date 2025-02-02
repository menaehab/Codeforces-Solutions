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
  ll n, m;
  cin >> n >> m;
  vector<ll> arr(n);
  ll mx = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    mx = max(mx, arr[i]);
  }
  if (abs(mx - arr[0]) > m)
  {
    int x = abs(mx - arr[0]) - m;
    arr[0] += x;
  }
  for (int i = 2; i < n; i++)
  {
    if (abs(arr[i] - arr[i - 1]) > m)
    {
      int x = abs(arr[i] - arr[i - 1]) - m;
      arr[i] += x;
    }
  }
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}