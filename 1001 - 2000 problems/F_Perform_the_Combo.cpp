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
    int n, m;
    string s;
    cin >> n >> m >> s;
    vector<ll> p(m), pfx(n + 1);
    map<char, ll> mp;
    for (int i = 0; i < m; i++)
    {
      cin >> p[i];
      pfx[0]++;
      pfx[p[i]]--;
    }
    for (int i = 0; i < n; i++)
    {
      mp[s[i]]++;
    }
    for (int i = 1; i < n; i++)
    {
      pfx[i] += pfx[i - 1];
    }
    for (int i = 0; i < n; i++)
    {
      mp[s[i]] += pfx[i];
    }
    for (char i = 'a'; i <= 'z'; i++)
    {
      cout << mp[i] << " ";
    }
    cout << el;
  }
  return 0;
}