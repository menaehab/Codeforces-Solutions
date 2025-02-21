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
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> arr(n);
    stack<int> stk;
    for (int i = 0; i < n; i++)
      cin >> arr[i];
    reverse(all(arr));
    for (int i = 0; i < n; i++)
    {
      stk.push(arr[i]);
    }
    bool f = 1;
    stack<int> tmp;
    int idx = 1;
    while (idx <= n)
    {
      if (!stk.empty() && idx == stk.top())
      {
        stk.pop();
        idx++;
      }
      else if (!tmp.empty() && tmp.top() == idx)
      {
        tmp.pop();
        idx++;
      }
      else if (!stk.empty())
      {
        tmp.push(stk.top());
        stk.pop();
      }
      else
      {
        f = 0;
        break;
      }
    }
    if (f)
      cout << "YES" << el;
    else
      cout << "NO" << el;
  }
  return 0;
}