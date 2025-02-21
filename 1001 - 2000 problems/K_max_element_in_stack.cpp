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
struct MyStack
{
  stack<ll> s;
  ll maxEle;

  void getMax()
  {
    cout << maxEle << el;
  }
  void peek()
  {
    if (s.empty())
    {
      return;
    }
    ll t = s.top();
    (t > maxEle) ? cout << maxEle : cout << t;
  }
  void pop()
  {
    if (s.empty())
    {
      return;
    }
    ll t = s.top();
    s.pop();
    if (t > maxEle)
    {
      maxEle = 2 * maxEle - t;
    }
  }
  void push(ll x)
  {
    if (s.empty())
    {
      maxEle = x;
      s.push(x);
      return;
    }
    if (x > maxEle)
    {
      s.push(2 * x - maxEle);
      maxEle = x;
    }
    else
      s.push(x);
  }
};
int main()
{
  setup();
  int t;
  cin >> t;
  MyStack stk;
  while (t--)
  {
    int k;
    cin >> k;
    if (k == 1)
    {
      ll x;
      cin >> x;
      stk.push(x);
    }
    else if (k == 2)
    {
      stk.pop();
    }
    stk.getMax();
  }
  return 0;
}