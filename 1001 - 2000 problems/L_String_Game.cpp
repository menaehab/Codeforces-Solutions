#include <bits/stdc++.h>
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
string s, t;
vector<int> arr;
bool can(int m)
{
  int n = t.size();
  int cnt = 0;
  unordered_map<int, bool> mp;
  for (int i = 0; i < m; i++)
  {
    mp[arr[i] - 1] = 1;
  }
  for (int i = 0; i < s.size(); i++)
  {
    if (!mp[i])
    {
      if (s[i] == t[cnt])
        cnt++;
      if (cnt == n)
        return 1;
    }
  }
  return 0;
}
int main()
{
  setup();
  cin >> s >> t;

  int n = s.size();
  arr.resize(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  int l = 0, r = n - 1, ans = 0;
  while (l <= r)
  {
    int m = (l + r) / 2;
    if (can(m))
    {
      ans = m;
      l = m + 1;
    }
    else
    {
      r = m - 1;
    }
  }
  cout << ans;
  return 0;
}