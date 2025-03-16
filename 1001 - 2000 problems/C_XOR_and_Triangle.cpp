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
    int x;
    cin >> x;
    if ((x & (x - 1) == 0) || ((x + 1) & (x) == 0))
    {
      cout << -1 << el;
      continue;
    }
    int b = x & (-x), ans = -1;
    for (int i = 1; i < x; i <<= 1)
    {
      if ((x & i) == 0)
      {
        int y = b + i;
        if (y < x)
        {
          ans = y;
          break;
        }
      }
    }
    cout << ans << el;
  }
  return 0;
}