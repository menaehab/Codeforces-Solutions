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
int gcd(int a, int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
int main()
{
  setup();
  int n;
  cin >> n;
  stack<int> stk;
  vector<int> arr(n);
  bool f = true;
  int cnt = 1;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  for (int i = 0; i < n; i++)
  {
    while (arr[i] >= cnt)
    {
      stk.push(cnt++);
    }
    if (!stk.empty() && stk.top() == arr[i])
    {
      stk.pop();
    }
    if (stk.empty())
    {
      f = false;
    }
  }
  if (f)
    cout << "NO" << el;
  else
    cout << "YES" << el;
  return 0;
}