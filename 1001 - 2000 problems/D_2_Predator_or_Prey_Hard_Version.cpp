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
  int n, a, b;
  cin >> n >> a >> b;
  vector<int> arr(n), cpy;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  cpy = arr;
  sort(all(cpy));
  for (int i = 0; i < n; i++)
  {
    int x = lower_bound(all(cpy), arr[i] + b) - cpy.begin();
    int y = lower_bound(all(cpy), arr[i] + a) - cpy.begin();
    cout << x - y << " ";
    x = upper_bound(all(cpy), arr[i] - a) - cpy.begin();
    y = upper_bound(all(cpy), arr[i] - b) - cpy.begin();
    cout << x - y << el;
  }
  return 0;
}