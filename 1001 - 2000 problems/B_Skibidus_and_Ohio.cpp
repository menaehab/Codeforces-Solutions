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
    string s;
    cin >> s;
    bool f = 0;
    for (int i = 0; i < s.size() - 1; i++)
    {
      if (s[i] == s[i + 1])
      {
        f = 1;
        break;
      }
    }

    if (f)
      cout << 1 << el;
    else
      cout << s.size() << el;
  }
  return 0;
}