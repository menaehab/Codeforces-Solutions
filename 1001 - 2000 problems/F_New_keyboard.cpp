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
  while (cin >> s)
  {
    int n = s.size();
    deque<string> dq;
    string x = "";
    bool f = 0;
    for (int i = 0; i < n; i++)
    {
      if (s[i] == '[')
      {
        if (!x.empty())
        {
          if (f)
            dq.push_front(x);
          else
            dq.push_back(x);
          x = "";
        }
        f = 1;
      }
      else if (s[i] == ']')
      {
        if (!x.empty())
        {
          if (f)
            dq.push_front(x);
          else
            dq.push_back(x);
          x = "";
        }
        f = 0;
      }
      else
      {
        x += s[i];
      }
    }
    if (!x.empty())
    {
      if (f)
        dq.push_front(x);
      else
        dq.push_back(x);
    }
    for (auto it : dq)
    {
      cout << it;
    }
    cout << el;
  }
  return 0;
}