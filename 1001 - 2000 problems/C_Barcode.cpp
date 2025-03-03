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
int n, m, x, y;
vector<int> arr;
int sol()
{
}
int main()
{
  setup();
  cin >> n >> m;
  arr.resize(m);
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      char c;
      cin >> c;
      if (c == '.')
        arr[j]++;
    }
  }
  return 0;
}