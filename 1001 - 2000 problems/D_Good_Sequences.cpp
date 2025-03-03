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

vector<ll> divisors(ll n)
{
  vector<ll> divs;
  for (ll i = 1; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      divs.push_back(i);
      if (i * i != n)
        divs.push_back(n / i);
    }
  }
  return divs;
}
int n;
vector<int> arr;
int dp[10005];
int sol(int i = 0, int last = -1)
{
  if (i == n)
    return 0;
  if (dp[i] != -1)
    return dp[i];
  vector<ll> divs = divisors(arr[i]);
  int &ret = dp[i] = 0;

  return ret;
}
int main()
{
  setup();
  cin >> n;
  arr.resize(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  memset(dp, -1, sizeof dp);
  cout << sol();
  return 0;
}