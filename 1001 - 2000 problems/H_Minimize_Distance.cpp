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
    int n, k, mx = -1;
    cin >> n >> k;
    vector<int> arr(n), pos, neg;
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
      mx = max(mx, abs(arr[i]));
      if (arr[i] > 0)
        pos.push_back(arr[i]);
      else
        neg.push_back(abs(arr[i]));
    }
    ll res = 0;
    res -= mx;
    sort(allr(pos));
    sort(allr(neg));
    for (int i = 0; i < pos.size(); i += k)
    {
      res += pos[i] * 2;
    }
    for (int i = 0; i < neg.size(); i += k)
    {
      res += neg[i] * 2;
    }
    cout << res << el;
  }
  return 0;
}