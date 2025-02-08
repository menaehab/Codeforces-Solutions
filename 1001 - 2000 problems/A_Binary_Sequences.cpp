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
int n;
void sol(string s = "")
{
  if (s.size() == n)
  {
    cout << s << el;
    return;
  }
  sol(s + "0");
  sol(s + "1");
}
int main()
{
  setup();
  int t;
  cin >> t;
  while (t--)
  {
    cin >> n;
    sol();
  }
  return 0;
}