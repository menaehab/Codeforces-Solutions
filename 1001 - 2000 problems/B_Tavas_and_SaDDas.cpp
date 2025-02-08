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
ll n, ans;
void lucky(ll x, ll idx)
{
  if (x > n)
    return;
  if (x == n)
    ans = idx;
  lucky(x * 10 + 4, 2 * idx + 1);
  lucky(x * 10 + 7, 2 * idx + 2);
}
int main()
{
  setup();
  cin >> n;
  lucky(0, 0);
  cout << ans;
  return 0;
}