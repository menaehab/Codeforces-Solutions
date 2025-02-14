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
  string s;
  cin >> s;
  stack<char> stk;
  string ans = "";
  for (char c : s)
  {
    if (!stk.empty() && stk.top() == c)
      stk.pop();
    else
      stk.push(c);
  }
  while (!stk.empty())
  {
    ans += stk.top();
    stk.pop();
  }
  reverse(all(ans));
  cout << ans << el;
  return 0;
}