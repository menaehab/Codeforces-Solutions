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
  // #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  // #endif
}
int n, k;
vector<int> arr;
const int N = 1e4 + 5;
ll dp[105][N];
ll sol(int i = 0, ll sum = k)
{
  if (i == n)
    return 0;
  ll &ret = dp[i][sum];
  if (ret != -1)
    return ret;
  ll leave = sol(i + 1, sum);
  ll take = 0;
  if (sum >= arr[i])
    take = sol(i + 1, sum - arr[i]) + 1;
  return ret = max(leave, take);
}
int main()
{
  setup();
  cin >> n >> k;
  arr.resize(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    arr[i] = arr[i] * (n - i);
  }
  memset(dp, -1, sizeof dp);
  cout << sol();
  return 0;
}