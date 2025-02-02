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
ll modMul(ll a, ll b, ll mod)
{
  return ((a % mod) * ((b % mod) % mod)) % mod;
}
ll fastPowerMod(ll a, ll b, ll mod)
{
  if (b == 0)
    return 1;
  ll half = fastPowerMod(a, b / 2, mod);
  if (b % 2 == 0)
    return modMul(half, half, mod) % mod;
  else
    return modMul(modMul(half, half, mod), a, mod) % mod;
}
int main()
{
  setup();
  ll a, b;
  cin >> a >> b;
  cout << fastPowerMod(a, b, 1000000007);
  return 0;
}