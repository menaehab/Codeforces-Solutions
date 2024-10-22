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
  vector<string> a, b, c, d;
  for (int i = 0; i < n; i++)
  {
    string x, y;
    cin >> x >> y;
    if (y == "captain")
      d.push_back(x);
    else if (y == "man")
      c.push_back(x);
    else if (y == "rat")
      a.push_back(x);
    else
      b.push_back(x);
  }
  for (auto i : a)
    cout << i << el;
  for (auto i : b)
    cout << i << el;
  for (auto i : c)
    cout << i << el;
  for (auto i : d)
    cout << i << el;
  return 0;
}