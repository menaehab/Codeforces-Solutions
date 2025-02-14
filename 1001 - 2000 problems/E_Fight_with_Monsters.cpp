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
  int n, a, b, k;
  cin >> n >> a >> b >> k;
  int sum = a + b;
  int ans = 0;
  vector<int> arr(n), v;
  for (int &x : arr)
    cin >> x;
  for (int i = 0; i < n; i++)
  {
    int rem = (arr[i] % sum);
    if (rem == 0)
      rem = sum;
    if (rem <= a)
      ans++;
    else
      v.push_back((rem + a - 1) / a - 1);
  }
  sort(all(v));
  for (auto x : v)
  {
    if (k >= x)
    {
      k -= x;
      ans++;
    }
    else
      break;
  }
  cout << ans;
  return 0;
}