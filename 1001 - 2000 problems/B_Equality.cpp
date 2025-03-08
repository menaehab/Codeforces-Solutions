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
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    map<int, int> mp;
    int x = 0, mx = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
      mp[arr[i]]++;
      if (mp[arr[i]] > mx)
      {
        mx = mp[arr[i]];
        x = arr[i];
      }
    }
    int idx = 0, ans = 0;
    bool f = 0;
    for (int i = 0; i < n; i++)
    {
      if (arr[i] != x)
        ans++, i += k - 1;
    }
    cout << ans << el;
  }
  return 0;
}