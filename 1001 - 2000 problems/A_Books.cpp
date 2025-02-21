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
  vector<int> arr(n);
  for (int &x : arr)
    cin >> x;
  int l = 0, r = 0, ans = 0, sum = 0;
  while (r < n)
  {
    while (r < n && sum + arr[r] <= k)
    {
      sum += arr[r];
      r++;
    }
    ans = max(ans, r - l);
    sum -= arr[l];
    l++;
  }
  cout << ans << el;

  return 0;
}