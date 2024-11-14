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
int ans1(vector<int> &arr, int x, int n)
{
  if (arr[0] > x)
    return 0;
  int l = 0, r = n - 1, ans = 0;
  while (l <= r)
  {
    int mid = (l + r) / 2;
    if (arr[mid] <= x)
    {
      l = mid + 1;
      ans = l;
    }
    else
      r = mid - 1;
  }
  return ans;
}
int ans2(vector<int> &arr, int x, int n)
{
  if (arr[n - 1] < x)
    return n;
  int l = 0, r = n - 1, ans = n;
  while (l <= r)
  {
    int mid = (l + r) / 2;
    if (arr[mid] >= x)
    {
      ans = mid;
      r = mid - 1;
    }
    else
      l = mid + 1;
  }
  return ans;
}
int main()
{
  setup();
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  sort(all(arr));
  int q;
  cin >> q;
  while (q--)
  {
    int x, y;
    cin >> x >> y;
    cout << ans1(arr, y, n) - ans2(arr, x, n) << " ";
  }
  return 0;
}