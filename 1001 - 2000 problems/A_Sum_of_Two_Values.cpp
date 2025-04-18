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
  vector<pair<int, int>> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i].first;
    arr[i].second = i + 1;
  }
  sort(all(arr));
  int ans1 = -1, ans2 = -1;

  for (int i = 0; i < n; i++)
  {
    int l = i + 1, r = n - 1;
    while (l <= r)
    {
      int mid = (l + r) / 2;
      int sum = arr[i].first + arr[mid].first;
      if (sum == k)
      {
        ans1 = arr[i].second;
        ans2 = arr[mid].second;
        cout << ans1 << " " << ans2;
        return 0;
      }
      else if (sum < k)
      {
        l = mid + 1;
      }
      else
      {
        r = mid - 1;
      }
    }
  }
  cout << -1;
  return 0;
}