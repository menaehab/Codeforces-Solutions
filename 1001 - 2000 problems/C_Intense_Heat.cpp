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
  ll n, k;
  cin >> n >> k;
  double ans = 0;
  vector<double> pre(n + 1);
  for (int i = 1; i <= n; i++)
  {
    int x;
    cin >> x;
    pre[i] += x + pre[i - 1];
  }
  for (int i = 1; i <= n; i++)
  {
    for (int j = i; j <= n; j++)
    {
      if (j - i + 1 >= k)
      {
        double cnt = 0;
        cnt = (pre[j] - pre[i - 1]);
        cnt /= (j - i + 1);
        ans = max(ans, cnt);
      }
    }
  }
  cout.precision(15);
  cout << fixed << ans << el;
  return 0;
}