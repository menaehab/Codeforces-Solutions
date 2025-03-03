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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
      cin >> arr[i];
    ll ans = *max_element(all(arr));
    ll l = 0, r = ans;
    while (l <= r)
    {
      ll mid = (l + r) / 2;
      ll cnt = 0, i = 0;
      while (i < n)
      {
        if (arr[i] > mid && s[i] == 'B')
        {
          cnt++;
          while (i < n && (arr[i] <= mid || s[i] == 'B'))
            i++;
        }
        else
          i++;
      }
      if (cnt <= k)
      {
        ans = mid;
        r = mid - 1;
      }
      else
        l = mid + 1;
    }
    cout << ans << el;
  }

  return 0;
}