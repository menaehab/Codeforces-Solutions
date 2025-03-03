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
  int x, w1, w2;
  cin >> x >> w1 >> w2;
  int w3, d1;
  int w4, d2;
  cin >> w3 >> d1 >> w4 >> d2;
  for (int i = 1; i <= x; i++)
  {
    if (i % d1 == 0)
      w1 -= w3;
    if (i % d2 == 0)
      w1 += w4;
    if (w1 <= w2)
    {
      cout << "He Can :D";
      return 0;
    }
  }
  cout << "He Can't :'(";
  return 0;
}