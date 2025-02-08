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
string s;
vector<string> ans;
void sol(string x = "", int i = 0)
{
  if (i == s.size())
  {
    ans.push_back(x);
    return;
  }
  sol(x + s[i], i + 1);
  sol(x, i + 1);
}
int main()
{
  setup();
  cin >> s;
  sol();
  sort(all(ans));
  for (auto &x : ans)
  {
    if (x != "")
      cout << x << el;
  }
  return 0;
}