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
  int n, q;
  cin >> n >> q;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  while (q--)
  {
    int x;
    cin >> x;
    int l = 0, r = n - 1, ans = -1;
    while (r >= l)
    {
      int md = (l + r) / 2;
      if (arr[md] >= x)
      {
        ans = md + 1;
        r = md - 1;
      }
      else
      {
        l = md + 1;
      }
    }
    cout << ans << el;
  }
  return 0;
}