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
  int n;
  cin >> n;
  stack<int> stk;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    if (stk.empty())
      stk.push(x);
    else if ((x & 1) == (stk.top() & 1))
      stk.pop();
    else
      stk.push(x);
  }
  if (stk.size() <= 1)
    cout << "YES" << el;
  else
    cout << "NO" << el;
  return 0;
}