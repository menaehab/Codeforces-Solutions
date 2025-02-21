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
  int t;
  cin >> t;
  while (t--)
  {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> arr(n);
    for (auto &x : arr)
      cin >> x;
    for (int i = 0; i <= n - m; i++)
    {
      sort(arr.begin() + i, arr.begin() + i + m);
      if (i > k)
        break;
    }
    cout << arr[k - 1] << el;
  }
  return 0;
}