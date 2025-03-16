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
    int n;
    cin >> n;
    vector<int> arr(n), cpy;
    for (int i = 0; i < n; i++)
      cin >> arr[i];
    sort(all(arr));
    bool f = 0;
    for (int i = 0; i < n - 1; i++)
    {
      if (i + 1 < n && arr[i] >= arr[i + 1])
      {
        f = 1;
        break;
      }
    }
    if (f)
      cout << "NO" << el;
    else
      cout << "YES" << el;
  }
  return 0;
}