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
  int t;
  cin >> t;
  while (t--)
  {
    int a, b, c;
    cin >> a >> b >> c;
    bool flag = false;
    if ((b + b - a) % c == 0 && (b + b - a) >= c)
      flag = true;
    if ((b + b - c) % a == 0 && (b + b - c) >= a)
      flag = true;
    if ((a + c) % 2 == 0 && ((a + c) / 2) % b == 0 && ((a + c) / 2) >= b)
      flag = true;
    if (flag)
      cout << "YES" << el;
    else
      cout << "NO" << el;
  }
  return 0;
}