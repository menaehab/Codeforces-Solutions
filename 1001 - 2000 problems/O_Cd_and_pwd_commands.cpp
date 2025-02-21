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

  int t;
  cin >> t;
  deque<string> dq;
  while (t--)
  {
    string s;
    cin >> s;
    if (s == "pwd")
    {
      if (dq.empty())
        cout << "/" << el;
      else
      {
        for (auto &x : dq)
          cout << "/" << x;
        cout << "/" << el;
      }
    }
    else if (s == "cd")
    {
      string dir;
      cin >> dir;
      string pth = "";
      if (dir[0] == '/')
        dq.clear();
      for (int i = 0; i < dir.size(); i++)
      {
        if (i + 1 < dir.size() && dir[i] == '.' && dir[i + 1] == '.')
        {
          dq.pop_back();
          i++;
        }
        else if (dir[i] == '/')
        {
          if (pth != "")
            dq.push_back(pth);
          pth = "";
        }
        else
          pth += dir[i];
      }
      if (pth != "")
        dq.push_back(pth);
    }
  }
  return 0;
}