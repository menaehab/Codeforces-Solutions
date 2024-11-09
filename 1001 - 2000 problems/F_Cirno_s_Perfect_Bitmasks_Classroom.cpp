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
  int t;
  cin >> t;
  while (t--)
  {
    ll n, ans = 0, o = 0, z = 0;
    cin >> n;
    bool flag1 = false, flag2 = false;
    for (ll i = 0; i <= 30; i++)
    {
      if ((n >> i) & 1)
      {
        if (!flag1)
        {
          ans |= (1 << i);
          flag1 = true;
        }
        o++;
        continue;
      }
      if (!flag2)
      {
        z = i;
        flag2 = true;
      }
    }
    if (o == 1)
      ans |= (1 << z);
    cout << ans << el;
  }

  return 0;
}