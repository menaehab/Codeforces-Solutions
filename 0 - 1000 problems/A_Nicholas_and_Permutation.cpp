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
  int n, mn = INT_MAX, mx = INT_MIN, mx_pos, mn_pos;
  cin >> n;
  vector<int> arr(n + 1);
  for (int i = 1; i <= n; i++)
  {
    cin >> arr[i];
    if (arr[i] > mx)
    {
      mx = arr[i];
      mx_pos = i;
    }
    if (mn > arr[i])
    {
      mn = arr[i];
      mn_pos = i;
    }
  }
  vector<int> res(4);
  res[0] = abs(mx_pos - 1);
  res[1] = abs(mx_pos - n);
  res[2] = abs(mn_pos - 1);
  res[3] = abs(mn_pos - n);
  sort(all(res));
  cout << res[3];
  return 0;
}