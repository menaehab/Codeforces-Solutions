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
int main()
{
  setup();
  int n, k;
  string s;
  cin >> n >> k >> s;
  int cnt = 0, ans = 0;
  map<char, int> mp;
  for (int i = 0; i < k; i++)
  {
    if (mp[s[i]] == 0)
      cnt++;
    mp[s[i]]++;
  }
  ans = cnt;
  for (int i = k; i < n; i++)
  {
    mp[s[i - k]]--;
    if (mp[s[i - k]] == 0)
      cnt--;
    if (mp[s[i]] == 0)
      cnt++;
    mp[s[i]]++;
    ans = max(ans, cnt);
  }
  cout << ans << el;

  return 0;
}