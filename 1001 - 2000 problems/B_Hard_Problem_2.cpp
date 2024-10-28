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
  vector<ll> arr(n), pfx(n + 1);
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  while (q--)
  {
    int x, y;
    cin >> x >> y;
    pfx[--x]++;
    pfx[y]--;
  }
  for (int i = 1; i < n; i++)
    pfx[i] += pfx[i - 1];
  sort(all(arr));
  sort(pfx.begin(), pfx.end() - 1);
  ll ans = 0;
  for (int i = 0; i < n; i++)
    ans += arr[i] * pfx[i];
  cout << ans;
  return 0;
}