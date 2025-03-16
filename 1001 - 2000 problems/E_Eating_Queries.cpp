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
    int n, q;
    cin >> n >> q;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
      cin >> arr[i];
    sort(allr(arr));
    for (int i = 1; i < n; i++)
    {
      arr[i] = arr[i] + arr[i - 1];
    }
    while (q--)
    {
      int x;
      cin >> x;
      if (x > arr[n - 1])
        cout << -1 << el;
      else
      {
        int it = lower_bound(all(arr), x) - arr.begin() + 1;
        cout << it << el;
      }
    }
  }
  return 0;
}