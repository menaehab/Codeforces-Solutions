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
  set<char> st;
  string s;
  cin >> s;
  for (int i = 0; i < n; i++)
  {
    st.insert(s[i]);
  }
  int dsnt = st.size();
  int l = 0, r = 0, cur = 0, ans = INT_MAX;
  unordered_map<char, int> mp;
  while (l < n)
  {
    while (r < n && dsnt > cur)
    {
      mp[s[r]]++;
      if (mp[s[r]] == 1)
        cur++;
      r++;
    }
    if (dsnt == cur)
      ans = min(ans, r - l);
    mp[s[l]]--;
    if (mp[s[l]] == 0)
      cur--;
    l++;
  }
  cout << ans << el;
  return 0;
}