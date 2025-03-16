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
double n, k;
vector<double> arr;
bool can(double md)
{
  double sum = 0;
  double need = 0;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > md)
    {
      double x = arr[i] - md;
      sum += ((x * (100 - k)) / 100.0);
    }
    else
      need += (md - arr[i]);
  }
  return sum >= need;
}
int main()
{
  setup();

  cin >> n >> k;
  arr.resize(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  double l = 0, r = 1005, ans = 0;
  while (r - l > 1e-9)
  {
    double md = l + (r - l) / 2;
    if (can(md))
    {
      ans = md;
      l = md;
    }
    else
      r = md;
  }
  cout << fixed << setprecision(9) << ans << el;
  return 0;
}