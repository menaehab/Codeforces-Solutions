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
int n, m;
vector<int> a, b;
bool can(ll mid)
{
  int p = 0;
  for (int i = 0; i < n; i++)
  {
    while (p < m - 1 && abs(a[i] - b[p]) > mid && a[i] > b[p])
    {
      p++;
    }
    if (abs(a[i] - b[p]) > mid)
      return 0;
  }
  return 1;
}
int main()
{
  setup();
  cin >> n >> m;
  a.resize(n), b.resize(m);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i = 0; i < m; i++)
    cin >> b[i];

  sort(all(a));
  sort(all(b));
  ll l = 0, r = 1e10, ans = -1;
  while (l <= r)
  {
    ll md = l + (r - l) / 2;
    if (can(md))
    {
      ans = md;
      r = md - 1;
    }
    else
      l = md + 1;
  }
  cout << ans << el;

  return 0;
}