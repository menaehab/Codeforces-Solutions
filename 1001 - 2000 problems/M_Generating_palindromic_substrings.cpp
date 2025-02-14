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
bool isPalindrome(string s)
{
  string p = s;
  reverse(all(p));
  return s == p;
}
string s;
int n;
multiset<string> ans;
void sol(int idx = 0, string x = "")
{
  if (idx == n)
    return;
  x += s[idx];
  if (isPalindrome(x))
    ans.insert(x);
  sol(idx + 1, x);
}
int main()
{
  setup();
  cin >> s;
  n = s.size();
  for (int i = 0; i < n; i++)
  {
    sol(i);
  }
  for (auto i : ans)
  {
    cout << i << el;
  }
  return 0;
}