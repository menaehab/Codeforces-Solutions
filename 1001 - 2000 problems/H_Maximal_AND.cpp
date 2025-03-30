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
int getBit(int x, int idx)
{
  return (x >> idx) & 1;
}
int main()
{
  setup();
  int t;
  cin >> t;
  while (t--)
  {
    int n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
      cin >> arr[i];
    ll ans = 0;
    for (int mask = 31 - 1; mask >= 0; mask--)
    {
      ll cnt = 0;
      for (int i = 0; i < n; i++)
      {
        if ((getBit(arr[i], mask) & 1) == 0)
          cnt++;
      }
      if (k >= cnt)
      {
        k -= cnt;
        ans += (1 << mask);
      }
    }
    cout << ans << el;
  }
  return 0;
}