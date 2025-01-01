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
  ll n, q;
  cin >> n >> q;
  vector<ll> arr(n + 1), pfx1(n + 2), pfx2(n + 2);
  for (int i = 1; i <= n; i++)
    cin >> arr[i];
  while (q--)
  {
    ll l, r;
    cin >> l >> r;
    pfx1[l]++;
    pfx1[r + 1]--;
    pfx2[r + 1] -= (r - l + 1);
  }
  for (int i = 1; i <= n; i++)
  {
    pfx1[i] += pfx1[i - 1];
    pfx2[i] += pfx2[i - 1];
    pfx2[i] += pfx1[i];
    cout << arr[i] + pfx2[i] << " ";
  }
  return 0;
}