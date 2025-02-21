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
ll n, k;
const ll N = 2e5 + 5;
vector<int> arr[N];
ll dp[N];
ll sol(int i = 1)
{
  if (i > n)
    return 0;
  if (dp[i] != -1)
    return dp[i];
  dp[i] = sol(i + 1);
  for (auto x : arr[i])
    dp[i] = max(dp[i], sol(x) + 1);
  return dp[i];
}
int main()
{
  setup();
  cin >> n >> k;
  while (k--)
  {
    int x, y;
    cin >> x >> y;
    arr[x].push_back(y);
  }
  memset(dp, -1, sizeof dp);
  cout << sol() << el;
  return 0;
}