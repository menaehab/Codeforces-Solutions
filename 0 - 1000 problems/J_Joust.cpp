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
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
      cin >> b[i];
    }
    int x = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
      if (a[i] != -1 && b[i] != -1)
      {
        if (a[i] > b[i])
          x++;
        else if (a[i] < b[i])
          y++;
      }
      else if (a[i] != -1)
        x++;
      else if (b[i] != -1)
        y++;
    }
    if (x == y)
      cout << "Tie" << el;
    else if (x > y)
      cout << "Alfredo" << el;
    else
      cout << "Saboya" << el;
  }
  return 0;
}