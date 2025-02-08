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
int n, m;
vector<string> arr, ans;
void sol(int x = 0, int y = n - 1, int idx = 0)
{
  if (idx == m)
  {
    for (int i = 0; i < m; i++)
    {
      cout << ans[i] << " ";
    }
    cout << el;
    return;
  }
  for (int i = x; i <= y && y - i + 1 >= m - idx; i++)
  {
    ans.push_back(arr[i]);
    sol(i + 1, y, idx + 1);
    ans.pop_back();
  }
}
int main()
{
  setup();
  cin >> n >> m;
  arr.resize(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  sort(all(arr));
  sol();
  return 0;
}