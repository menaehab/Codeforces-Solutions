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
  string x, y, z;
  cin >> x >> y >> z;
  int idxM = 0, idxA = 0, idxR = 0;
  bool m = 1, r = 0, a = 0;
  while (true)
  {
    if (m)
    {
      if (idxM == x.size())
      {
        cout << "M";
        break;
      }
      m = (x[idxM] == 'm');
      a = (x[idxM] == 'a');
      r = (x[idxM] == 'r');
      idxM++;
    }
    else if (a)
    {
      if (idxA == y.size())
      {
        cout << "A";
        break;
      }
      m = (y[idxA] == 'm');
      a = (y[idxA] == 'a');
      r = (y[idxA] == 'r');
      idxA++;
    }
    else if (r)
    {
      if (idxR == z.size())
      {
        cout << "R";
        break;
      }
      m = (z[idxR] == 'm');
      a = (z[idxR] == 'a');
      r = (z[idxR] == 'r');
      idxR++;
    }
  }
  return 0;
}