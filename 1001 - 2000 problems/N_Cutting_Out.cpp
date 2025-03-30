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
vector<int> arr;
map<int, int> mp;
vector<int> ans;
bool can(int md)
{
  vector<int> tmp;
  for (int i = 0; i < n; i++)
  {
    if (mp[arr[i]] >= md)
    {
      tmp.push_back(arr[i]);
    }
  }
  if (tmp.size() >= k)
  {
    ans = tmp;
    return 1;
  }
  return 0;
}
int main()
{
  setup();
  cin >> n >> k;
  arr.resize(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    mp[arr[i]]++;
  }

  int l = 0, r = 1e10;
  while (l <= r)
  {
    int md = l + (r - l) / 2;
    if (can(md))
    {
      l = md + 1;
    }
    else
      r = md - 1;
  }

  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << ' ';
  }

  return 0;
}