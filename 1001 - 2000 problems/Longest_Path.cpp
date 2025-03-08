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
vector<vector<int>> adj;
const int N = 4e5 + 5;
int dp[N];
int sol(int node)
{
  if (adj[node].empty())
    return 0;
  int &ret = dp[node];
  if (~ret)
    return ret;
  for (auto it : adj[node])
  {
    ret = max(ret, sol(it) + 1);
  }
  return ret;
}
int main()
{
  setup();
  int n, m;

  cin >> n >> m;
  adj.resize(n + 1, {});
  for (int i = 0; i < m; i++)
  {
    int a, b;
    cin >> a >> b;
    adj[a].push_back(b);
  }
  int ans = 0;
  memset(dp, -1, sizeof dp);
  for (int i = 1; i <= n; i++)
  {
    ans = max(ans, sol(i));
  }
  cout << ans;
  return 0;
}