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
  sort(all(arr));
  while (q--)
  {
    int x;
    cin >> x;
    ll l = 0, r = n - 1, ans = 0;
    while (l <= r)
    {
      ll md = (l + r) / 2;
      if (arr[md] <= x)
      {
        l = md + 1;
        ans = l;
      }
      else
      {
        r = md - 1;
      }
    }
    cout << ans << " ";
  }
  return 0;
}