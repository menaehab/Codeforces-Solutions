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
ll gcd(ll a, ll b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
int main()
{
  setup();
  int n, k;
  cin >> n >> k;
  ll ans = 0;
  vector<pair<int, int>> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i].first;
  }
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i].second;
    if (arr[i].second == 1)
      ans += arr[i].first;
  }
  ll mx = 0, sum = 0;
  for (int i = 0; i < k; i++)
  {
    if (arr[i].second == 0)
    {
      sum += arr[i].first;
    }
  }
  mx = sum;
  for (int i = k; i < n; i++)
  {
    if (arr[i].second == 0)
    {
      sum += arr[i].first;
    }
    if (arr[i - k].second == 0)
    {
      sum -= arr[i - k].first;
    }
    mx = max(mx, sum);
  }
  cout << mx + ans;
  return 0;
}