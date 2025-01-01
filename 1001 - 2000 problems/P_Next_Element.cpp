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
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  int q;
  cin >> q;
  vector<int> ans(n, -1);
  stack<int> stk;
  for (int i = n - 1; i >= 0; i--)
  {
    while (!stk.empty() && arr[stk.top()] <= arr[i])
    {
      stk.pop();
    }
    if (!stk.empty())
    {
      ans[i] = stk.top() + 1;
    }
    stk.push(i);
  }
  while (q--)
  {
    int i;
    cin >> i;
    cout << ans[i - 1] << el;
  }
  return 0;
}