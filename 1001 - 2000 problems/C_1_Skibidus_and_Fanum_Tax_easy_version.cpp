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
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    for (auto &x : a)
      cin >> x;
    ll k;
    cin >> k;
    bool f = 1;
    a[0] = min(a[0], k - a[0]);
    for (int i = 1; i < n; i++)
    {
      if (min(a[i], k - a[i]) >= a[i - 1])
      {
        a[i] = min(a[i], k - a[i]);
      }
      else
      {
        a[i] = max(a[i], k - a[i]);
      }
    }
    if (is_sorted(all(a)))
      cout << "YES" << el;
    else
      cout << "NO" << el;
  }
  return 0;
}