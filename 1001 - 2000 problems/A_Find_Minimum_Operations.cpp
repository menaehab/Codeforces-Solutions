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
    ll n, k;
    cin >> n >> k;
    if (k == 1)
    {
      cout << n << el;
      continue;
    }
    int ans = 0;
    while (n > 0)
    {
      ans += n % k;
      n /= k;
    }
    cout << ans << el;
  }
  return 0;
}