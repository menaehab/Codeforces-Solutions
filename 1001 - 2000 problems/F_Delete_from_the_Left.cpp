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
  string x, y;
  cin >> x >> y;
  int n = x.size(), m = y.size(), ans = 0;
  for (int i = n - 1, j = m - 1; i >= 0 && j >= 0; i--, j--)
  {
    if (x[i] == y[j])
    {
      ans++;
    }
    else
    {
      break;
    }
  }
  cout << x.size() + y.size() - (ans * 2);
  return 0;
}