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
  int n, a, b;
  cin >> n >> a >> b;
  string s;
  cin >> s;
  if (b > a)
    swap(a, b);
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    if (s[i] == '*')
      continue;
    if (s[i] == '.')
    {
      if (i > 0 && s[i - 1] == 'b')
      {
        if (a > 0)
        {
          s[i] = 'a';
          a--;
          ans++;
        }
        else
          continue;
      }
      else if (i > 0 && s[i - 1] == 'a')
      {
        if (b > 0)
        {
          s[i] = 'b';
          b--;
          ans++;
        }
        else
          continue;
      }
      else
      {
        if (a > b)
        {
          s[i] = 'a';
          a--;
          ans++;
        }
        else
        {
          if (b > 0)
          {
            s[i] = 'b';
            b--;
            ans++;
          }
        }
      }
    }
  }
  cout << ans;
  return 0;
}