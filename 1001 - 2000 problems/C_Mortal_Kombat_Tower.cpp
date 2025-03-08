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
int n;
vector<int> arr;
const int N = 2e5 + 5;
int dp[N][2];
int sol(int i = 0, bool f = 0)
{
  if (i >= n)
    return 0;
  int &ret = dp[i][f];
  if (~ret)
    return ret;
  if (f)
    ret = min(sol(i + 1, 0), sol(i + 2, 0));
  else
    ret = min(sol(i + 1, 1) + (arr[i] == 1), sol(i + 2, 1) + (arr[i] == 1) + (arr[i + 1] == 1));
  return ret;
}
int main()
{
  setup();
  int t;
  cin >> t;
  while (t--)
  {
    cin >> n;
    arr.resize(n);
    for (int i = 0; i < n; i++)
      cin >> arr[i];
    memset(dp, -1, sizeof dp);
    cout << sol() << el;
    arr.clear();
  }
  return 0;
}