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
string s;
bool mem[5005][5005];
bool vis1[5005][5005];
bool vis2[5005][5005];
int dp[5005][5005];
bool isPal(int l, int r)
{
  if (l >= r)
    return 1;
  bool &ret = mem[l][r];
  if (vis1[l][r])
    return ret;
  vis1[l][r] = 1;
  return ret = ((s[l] == s[r]) && isPal(l + 1, r - 1));
}
int sol(int l, int r)
{
  if (l > r)
    return 0;
  if (vis2[l][r])
    return dp[l][r];
  vis2[l][r] = 1;
  int ch1 = sol(l + 1, r);
  int ch2 = sol(l, r - 1);
  int ch3 = sol(l + 1, r - 1);
  return dp[l][r] = ch1 + ch2 - ch3 + isPal(l, r);
}
int main()
{
  setup();
  cin >> s;
  int q;
  cin >> q;
  while (q--)
  {
    int l, r;
    cin >> l >> r;
    l--, r--;
    cout << sol(l, r) << el;
  }
  return 0;
}