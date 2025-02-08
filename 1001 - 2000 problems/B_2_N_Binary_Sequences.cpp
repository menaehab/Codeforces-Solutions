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
vector<string> ans;
void sol(string s = "", int sum1 = 0, int sum2 = 0, int cnt = 0)
{
  if (s.size() == 2 * n)
  {
    if (sum1 == sum2)
    {
      ans.push_back(s);
    }
    return;
  }
  if (cnt < n)
  {
    sol(s + "0", sum1, sum2, cnt + 1);
    sol(s + "1", sum1 + 1, sum2, cnt + 1);
  }
  else
  {
    sol(s + "0", sum1, sum2, cnt + 1);
    sol(s + "1", sum1, sum2 + 1, cnt + 1);
  }
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
    sort(all(ans));
    for (auto i : ans)
      cout << i << el;
    ans.clear();
  }

  return 0;
}