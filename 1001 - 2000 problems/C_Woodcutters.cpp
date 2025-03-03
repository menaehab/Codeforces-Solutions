#include <bits/stdc++.h>
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
int n;
vector<pair<int, int>> arr;
map<pair<int, int>, int> dp;
int sol(int i, int x)
{
  if (dp[{i, x}])
    return dp[{i, x}];
  if (i == n)
    return 0;
  int ch1 = 0, ch2 = 0, ch3 = 0;
  if (arr[i].first - arr[i].second > x)
    ch1 = 1 + sol(i + 1, arr[i].first);
  if (i + 1 == n || arr[i].first + arr[i].second < arr[i + 1].first)
    ch2 = 1 + sol(i + 1, arr[i].first + arr[i].second);
  ch3 = sol(i + 1, arr[i].first);
  return dp[{i, x}] = max({ch1, ch2, ch3});
}
int main()
{
  setup();
  cin >> n;
  arr.resize(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i].first >> arr[i].second;
  }
  cout << sol(0, INT_MIN) << el;
  return 0;
}