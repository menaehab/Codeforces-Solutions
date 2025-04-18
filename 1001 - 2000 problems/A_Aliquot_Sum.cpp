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
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i * i <= n; i++)
    {
      if (n % i == 0)
      {
        if (i != n)
        {
          sum += i;
        }
        if (n / i != n && i != 1 && i != n / i)
        {
          sum += n / i;
        }
      }
    }
    if (sum > n)
      cout << "abundant" << el;
    else if (sum < n)
      cout << "deficient" << el;
    else
      cout << "perfect" << el;
  }

  return 0;
}