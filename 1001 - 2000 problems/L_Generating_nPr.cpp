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
int n, r;
vector<int> arr, tmp;
vector<bool> vis;
void sol()
{
  if (tmp.size() == r)
  {
    for (int x : tmp)
      cout << x << " ";
    cout << el;
    return;
  }
  for (int i = 0; i < n; i++)
  {
    if (!vis[i])
    {
      vis[i] = 1;
      tmp.push_back(i + 1);
      sol();
      tmp.pop_back();
      vis[i] = 0;
    }
  }
}
int main()
{
  setup();
  cin >> n >> r;
  arr.resize(n);
  vis.resize(n);
  sol();
  return 0;
}