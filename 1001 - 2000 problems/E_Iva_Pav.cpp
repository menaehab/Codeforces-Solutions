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
    int n;
    cin >> n;
    vector<ll> arr(n + 1);
    vector<vector<ll>> pfx(n + 1, vector<ll>(32, 0));
    for (int i = 1; i <= n; i++)
    {
      cin >> arr[i];
      for (int bit = 0; bit < 32; bit++)
      {
        pfx[i][bit] = pfx[i - 1][bit] + ((arr[i] >> bit) & 1);
      }
    }
    int q;
    cin >> q;
    while (q--)
    {
      int l, k;
      cin >> l >> k;
      ll low = l, high = n, ans = -1;
      while (low <= high)
      {
        ll mid = low + (high - low) / 2;
        ll And = 0;
        for (int bit = 0; bit < 32; bit++)
        {
          int on = pfx[mid][bit] - pfx[l - 1][bit];
          if (on == mid - l + 1)
            And |= (1LL << bit);
        }
        if (And >= k)
        {
          ans = mid;
          low = mid + 1;
        }
        else
        {
          high = mid - 1;
        }
      }
      cout << ans << " ";
    }
    cout << el;
  }
  return 0;
}