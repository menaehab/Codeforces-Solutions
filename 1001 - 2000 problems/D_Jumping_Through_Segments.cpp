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
int n;
vector<pair<int, int>> arr;
bool can(int md)
{
  int Lpos = 0, Rpos = 0;
  for (int i = 0; i < n; i++)
  {
    if (Lpos - md > arr[i].second)
      return 0;
    if (Rpos + md < arr[i].first)
      return 0;
    Lpos = max(Lpos - md, arr[i].first);
    Rpos = min(Rpos + md, arr[i].second);
  }
  return 1;
}
int main()
{
  setup();
  int t;
  cin >> t;
  while (t--)
  {
    cin >> n;
    arr.resize(n);
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i].first >> arr[i].second;
    }
    ll l = 0, r = 1e9, ans = 0;
    while (l <= r)
    {
      ll md = (l + r) / 2;
      if (can(md))
      {
        ans = md;
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