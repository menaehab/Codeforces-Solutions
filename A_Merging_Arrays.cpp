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
  int n, m;
  cin >> n >> m;
  vector<int> a(n), b(m), ans;
  for (int &x : a)
    cin >> x;
  for (int &x : b)
    cin >> x;
  int p1 = 0, p2 = 0;
  while (p1 < n && p2 < m)
  {
    if (a[p1] <= b[p2])
    {
      ans.push_back(a[p1]);
      p1++;
    }
    else
    {
      ans.push_back(b[p2]);
      p2++;
    }
  }
  while (p1 < n)
  {
    ans.push_back(a[p1]);
    p1++;
  }
  while (p2 < m)
  {
    ans.push_back(b[p2]);
    p2++;
  }
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
  }

  return 0;
}