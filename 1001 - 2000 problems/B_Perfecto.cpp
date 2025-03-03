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
bool isPerfectSquare(ll n)
{
  if (ceil((double)sqrt(n)) == floor((double)sqrt(n)))
  {
    return true;
  }
  else
  {
    return false;
  }
}
int main()
{
  setup();
  int t;
  cin >> t;
  while (t--)
  {
    ll n;
    cin >> n;
    ll x = n * (n + 1) / 2;
    if (isPerfectSquare(x))
    {
      cout << -1 << el;
      continue;
    }
    vector<int> ans(n);
    ans[0] = 1;
    ll sum = 0;
    for (ll i = 1; i < n; i++)
    {
      ans[i] = i + 1;
      ll y = i * (i + 1) / 2;
      if (isPerfectSquare(y))
      {
        swap(ans[i - 1], ans[i]);
      }
    }
    for (int x : ans)
    {
      cout << x << " ";
    }
    cout << el;
  }
  return 0;
}