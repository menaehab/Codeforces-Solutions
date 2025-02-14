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

bool isPalindrome(string s)
{
  string p = s;
  reverse(all(p));
  return s == p;
}
int main()
{
  setup();
  int t;
  cin >> t;
  while (t--)
  {
    ll n, m, ans = 0, sum = 0;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m));
    vector<pair<int, int>> pr;
    for (int i = 0; i < n; i++)
    {
      int sum = 0;
      for (int j = 0; j < m; j++)
      {
        cin >> arr[i][j];
        sum += arr[i][j];
      }
      pr.push_back({sum, i});
    }
    sort(allr(pr));
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        sum += arr[pr[i].second][j];
        ans += sum;
      }
    }
    cout << ans << el;
  }
  return 0;
}