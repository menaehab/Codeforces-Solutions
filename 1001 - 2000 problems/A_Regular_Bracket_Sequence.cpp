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
  stack<char> stk;
  string s;
  cin >> s;
  int n = s.size(), cnt = 0;
  for (int i = 0; i < n; i++)
  {
    if (s[i] == '(')
    {
      stk.push(s[i]);
    }
    else if (s[i] == ')')
    {
      if (!stk.empty() && stk.top() == '(')
      {
        stk.pop();
        cnt += 2;
      }
      else
        stk.push(s[i]);
    }
  }
  cout << cnt << el;
  return 0;
}