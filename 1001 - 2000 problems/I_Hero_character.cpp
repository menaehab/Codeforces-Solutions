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
  vector<ll> arr(n), a(n + 1), b(n + 1);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  map<int, int> mp1, mp2;
  int i = 0, j = n - 1;
  while (i < n || j >= 0)
  {
    if (i < n)
    {
      a[i + 1] = a[i] + (mp1[arr[i]] == 0);
      mp1[arr[i]]++;
      i++;
    }
    if (j >= 0)
    {
      b[j] = b[j + 1] + (mp2[arr[j]] == 0);
      mp2[arr[j]]++;
      j--;
    }
  }
  ll mx = 0;
  for (int i = 1; i < n; i++)
  {
    mx = max(mx, a[i] + b[i]);
  }
  cout << mx;
  return 0;
}