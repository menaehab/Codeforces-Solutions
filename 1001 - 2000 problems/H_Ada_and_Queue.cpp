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
  deque<int> dq;
  while (t--)
  {
    string s;
    cin >> s;
    if (s == "toFront")
    {
      int x;
      cin >> x;
      dq.push_front(x);
    }
    if (s == "push_back")
    {
      int x;
      cin >> x;
      dq.push_back(x);
    }
    if (s == "back")
    {
      if (!dq.empty())
      {
        cout << dq.back() << el;
        dq.pop_back();
      }
      else
        cout << "No job for Ada?" << el;
    }
    if (s == "front")
    {
      if (!dq.empty())
      {
        cout << dq.front() << el;
        dq.pop_front();
      }
      else
        cout << "No job for Ada?" << el;
    }
    if (s == "reverse")
    {
      reverse(all(dq));
    }
  }
  return 0;
}