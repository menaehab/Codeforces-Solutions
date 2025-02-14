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
  int n = s.size();
  for (int i = 0; i < n; i++)
  {
    if (s[i] == '{' || s[i] == '[' || s[i] == '(')
    {
      stk.push(s[i]);
    }
    else if (s[i] == '}' || s[i] == ']' || s[i] == ')')
    {
      if (stk.empty())
      {
        cout << "no" << el;
        return 0;
      }
      if (s[i] == '}' && stk.top() == '{')
        stk.pop();
      else if (s[i] == ']' && stk.top() == '[')
        stk.pop();
      else if (s[i] == ')' && stk.top() == '(')
        stk.pop();
      else
        stk.push(s[i]);
    }
  }
  cout << (stk.empty() ? "yes" : "no") << el;

  return 0;
}