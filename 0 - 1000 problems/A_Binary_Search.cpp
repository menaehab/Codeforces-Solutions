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
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  while (k--)
  {
    int x;
    cin >> x;
    int l = 0, r = n - 1;
    bool flag = false;
    while (l <= r)
    {
      int mid = (l + r) / 2;
      if (arr[mid] == x)
      {
        flag = true;
        break;
      }
      else if (arr[mid] > x)
      {
        r = mid - 1;
      }
      else
      {
        l = mid + 1;
      }
    }
    if (flag)
      cout << "YES" << el;
    else
      cout << "NO" << el;
  }

  return 0;
}