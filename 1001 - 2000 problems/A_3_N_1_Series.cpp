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
int ans = 1;

void sol(ll n)
{
  if (n == 1)
    return;
  if (n % 2 == 0)
  {
    ans++;
    sol(n / 2);
  }
  else
  {
    ans++;
    sol(3 * n + 1);
  }
}
int main()
{
  setup();
  ll n;
  cin >> n;
  sol(n);
  cout << ans << el;
  return 0;
}