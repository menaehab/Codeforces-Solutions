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
  vector<ll> arr(n);
  unordered_map<ll, ll> mp;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    mp[arr[i]]++;
  }
  vector<ll> pw(33);
  for (int i = 0; i < 33; i++)
  {
    pw[i] = 1LL << i;
  }
  ll ans = 0;
  for (int i = 0; i < n; i++)
  {
    mp[arr[i]]--;
    bool f = false;
    for (int j = 0; j < 33; j++)
    {
      int x = pw[j] - arr[i];
      if (mp[x])
      {
        f = true;
        break;
      }
    }
    if (!f)
      ans++;
    mp[arr[i]]++;
  }
  cout << ans << el;
}