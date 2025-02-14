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
vector<int> arr, sub;
vector<vector<int>> ans;

void sol(int idx = 0)
{
  if (!sub.empty())
  {
    ans.push_back(sub);
  }
  for (int i = idx; i < n; i++)
  {
    if (sub.empty() || arr[i] > sub.back())
    {
      sub.push_back(arr[i]);
      sol(i + 1);
      sub.pop_back();
    }
  }
}
int main()
{
  setup();
  cin >> n;
  arr.resize(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  sol();
  sort(all(ans));
  for (auto x : ans)
  {
    for (auto res : x)
    {
      cout << res << " ";
    }
    cout << el;
  }
  return 0;
}