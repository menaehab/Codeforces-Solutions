#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <iomanip>
#include <string>
#include <set>
#include <queue>
#include <unordered_map>
#include <unordered_set>
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
  stack<ll> st;
  ll ans = 0;
  bool flag = 0, temp = 0;
  int t;
  cin >> t;
  while (t--)
  {
    string s;
    cin >> s;
    if (s == "add")
    {
      if (st.empty())
        ans++;
      else
      {
        if (temp == 1)
        {
          flag = 1;
          continue;
        }
        ans += st.top();
        if (ans > pow(2, 32) - 1)
        {
          flag = 1;
          continue;
        }
      }
    }
    else if (s == "for")
    {
      int n;
      cin >> n;
      if (st.empty())
        st.push(n);
      else if (st.top() * n < pow(2, 32) - 1 && st.top() != -1)
      {
        st.push(st.top() * n);
        temp = 0;
      }
      else
      {
        st.push(-1);
        temp = 1;
      }
    }
    else
    {
      st.pop();
      if (!st.empty() && st.top() != -1)
        temp = 0;
    }
  }
  if (flag || ans > pow(2, 32) - 1)
    cout << "OVERFLOW!!!";
  else
    cout << ans;
  return 0;
}