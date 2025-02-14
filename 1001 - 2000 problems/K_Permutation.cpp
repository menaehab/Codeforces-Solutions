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
vector<int> arr;
vector<vector<int>> ans;
vector<bool> vis;
void sol()
{
  if (arr.size() == n)
  {
    ans.push_back(arr);
    return;
  }
  for (int i = 1; i <= n; i++)
  {
    if (!vis[i])
    {
      vis[i] = 1;
      arr.push_back(i);
      sol();
      arr.pop_back();
      vis[i] = 0;
    }
  }
}
int main()
{
  setup();
  cin >> n;
  vis.resize(n + 1);
  sol();
  for (auto x : ans)
  {
    for (int i = 0; i < x.size(); i++)
      if (i + 1 != x.size())
        cout << x[i] << " ";
      else
        cout << x[i];
    cout << el;
  }
  return 0;
}