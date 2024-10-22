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
  int cnt = 0;
  while (n % 2 == 0)
  {
    n /= 2;
    cnt++;
  }
  if (cnt > 0)
    cout << "2 " << cnt << el;
  for (int i = 3; i <= sqrt(n); i += 2)
  {
    cnt = 0;
    while (n % i == 0)
    {
      n /= i;
      cnt++;
    }
    if (cnt > 0)
    {
      cout << i << " " << cnt << el;
    }
  }
  if (n > 2)
    cout << n << " 1" << el;
  return 0;
}