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
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int &x : arr)
    cin >> x;
  int ans = 0;
  for (int i = 1; i < n - 1; i++)
  {
    if (arr[i] == 0 && arr[i + 1] == 1 && arr[i - 1] == 1)
    {
      ans++;
      arr[i + 1] = 0;
    }
  }
  cout << ans << el;
  return 0;
}