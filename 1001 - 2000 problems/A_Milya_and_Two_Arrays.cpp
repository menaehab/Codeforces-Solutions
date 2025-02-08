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
    vector<int> a(n), b(n);
    map<int, int> mp1, mp2;
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      mp1[a[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
      cin >> b[i];
      mp2[b[i]]++;
    }
    if (mp1.size() > 1 && mp2.size() > 1 || mp1.size() > 2 || mp2.size() > 2)
      cout << "YES" << el;
    else
      cout << "NO" << el;
  }

  return 0;
}