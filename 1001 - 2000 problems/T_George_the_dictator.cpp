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
  unordered_map<int, int> mp;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    mp[arr[i]]++;
  }
  int cnt = 0;
  for (int i = 0; i < n; i++)
  {
    if (mp[k - arr[i]] > 0)
    {
      if (k - arr[i] == arr[i])
        cnt += mp[k - arr[i]] - 1;
      else
        cnt += mp[k - arr[i]];
    }
    mp[arr[i]]--;
  }
  cout << cnt << el;
  return 0;
}