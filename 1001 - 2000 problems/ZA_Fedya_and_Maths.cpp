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
  string s;
  cin >> s;
  ll n = s.size(), ans;
  if (n >= 2)
  {
    string x = "";
    x += s[n - 2];
    x += s[n - 1];
    ans = stoi(x);
  }
  else
    ans = stoi(s);
  if (ans % 4 == 0)
    cout << 4;
  else
    cout << 0;
  return 0;
}