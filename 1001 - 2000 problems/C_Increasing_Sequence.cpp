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
  int n, k;
  cin >> n >> k;
  vector<int> arr(n);
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  for (int i = 1; i < n; i++)
  {
    if (arr[i] - arr[i - 1] <= 0)
    {
      ans += (arr[i - 1] - arr[i]) / k + 1;
      arr[i] += ((arr[i - 1] - arr[i]) / k + 1) * k;
    }
  }
  cout << ans << el;

  return 0;
}