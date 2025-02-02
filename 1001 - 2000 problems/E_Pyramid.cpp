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
ll n, i = 1;
void space(ll cnt)
{
  if (cnt > 0)
  {
    space(cnt - 1);
    cout << " ";
  }
}
void star(ll cnt)
{
  if (cnt > 0)
  {
    star(cnt - 1);
    cout << "*";
  }
}
void sol(ll x)
{
  if (x <= n)
  {
    space(n - x);
    star(2 * x - 1);
    cout << el;
    sol(x + 1);
  }
}
int main()
{
  setup();
  cin >> n;
  sol(1);
  return 0;
}