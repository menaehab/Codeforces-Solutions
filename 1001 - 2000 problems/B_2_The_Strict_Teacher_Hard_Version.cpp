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
int n, m, q;
int main()
{
  setup();
  int t;
  cin >> t;
  while (t--)
  {
    cin >> n >> m >> q;
    vector<int> a(m);
    for (int i = 0; i < m; i++)
      cin >> a[i];
    sort(all(a));
    while (q--)
    {
      int x;
      cin >> x;
      if (x < a[0])
        cout << a[0] - 1 << el;
      else if (x > a[m - 1])
        cout << n - a[m - 1] << el;
      else
      {
        int it = upper_bound(all(a), x) - a.begin();
        cout << (a[it] - a[it - 1]) / 2 << el;
      }
    }
  }
  return 0;
}