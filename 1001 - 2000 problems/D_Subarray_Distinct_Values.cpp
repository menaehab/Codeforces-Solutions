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
  ll n, k, ans = 0;
  cin >> n >> k;
  vector<int> arr(n);
  for (int &x : arr)
  {
    cin >> x;
  }
  int l = 0, r = 0;
  map<int, int> mp;
  while (r < n)
  {
    mp[arr[r]]++;
    while ((int)mp.size() > k)
    {
      mp[arr[l]]--;
      if (mp[arr[l]] == 0)
      {
        mp.erase(arr[l]);
      }
      l++;
    }
    ans += (r - l + 1);
    r++;
  }
  cout << ans;
  return 0;
}