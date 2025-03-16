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
  int n, hp, b, ans = 0;
  cin >> n >> hp >> b;
  while (n--)
  {
    int a, c;
    cin >> a >> c;
    if (c == 1)
    {
      if (b <= 0)
        break;
      b--;
    }
    if (hp > a)
      hp -= a;
    else
    {
      int d = a - (hp - 1);
      if (b >= d)
      {
        b -= d;
        hp = 1;
      }
      else
      {
        break;
      }
    }
    ans++;
  }
  cout << ans;
  return 0;
}