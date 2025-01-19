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
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    bool f = 0;
    int mn = *min_element(all(arr)), ans = 0;
    for (int i = 0; i < n; i++)
    {
      if (f && arr[i - 1] > arr[i])
      {
        f = 0;
        break;
      }
      if (arr[i] == mn && !f)
      {
        ans = i;
        f = 1;
      }
    }
    if (f)
      cout << ans << el;
    else
      cout << -1 << el;
  }
  return 0;
}