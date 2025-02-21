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
int main()
{
  setup();
  int n, k;
  cin >> n >> k;
  vector<pair<int, int>> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i].first >> arr[i].second;
  }
  sort(all(arr));
  ll idx = 0, sum = 0, ans = 0;
  for (int i = 0; i < n; i++)
  {
    sum += arr[i].second;
    while (arr[i].first - arr[idx].first >= k)
    {
      sum -= arr[idx].second;
      idx++;
    }
    ans = max(ans, sum);
  }
  cout << ans << el;
  return 0;
}