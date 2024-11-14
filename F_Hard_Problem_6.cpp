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
  int n, q;
  cin >> n >> q;
  vector<ll> a(n + 1), b(n + 1), p1(n + 1), p2(n + 2);
  for (int i = 1; i <= n; i++)
  {
    cin >> a[i];
    p1[i] = p1[i - 1] + a[i];
  }

  for (int i = 1; i <= n; i++)
  {
    cin >> b[i];
    p2[i] = p2[i - 1] + b[i];
  }
  while (q--)
  {
    int l, r;
    cin >> l >> r;
    if (p1[r] - p1[l - 1] >= p2[r] - p2[l - 1])
      cout << "CE" << el;
    else
      cout << "CS" << el;
  }
  return 0;
}