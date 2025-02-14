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
int n, k;
vector<int> arr, tmp;
set<vector<int>> ans;
void sol(int i = 0, int sum = 0)
{
  if (sum == k)
  {
    ans.insert(tmp);
    return;
  }
  if (i == n || sum > k)
    return;
  tmp.push_back(arr[i]);
  sol(i + 1, sum + arr[i]);
  tmp.pop_back();
  sol(i + 1, sum);
}
int main()
{
  setup();
  int t;
  cin >> t;
  while (t--)
  {
    cin >> n >> k;
    arr.resize(n);
    for (int &x : arr)
    {
      cin >> x;
    }
    sol();
    if (ans.empty())
    {
      cout << "NONE" << el << el;
      continue;
    }
    for (auto x : ans)
    {
      for (auto y : x)
        cout << y << " ";
      cout << el;
    }
    cout << el;
    ans.clear();
  }
  return 0;
}