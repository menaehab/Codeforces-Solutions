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
  ll n;
  cin >> n;
  cout << (isPerfectSquare(n) ? "YES" : "NO");
  return 0;
}