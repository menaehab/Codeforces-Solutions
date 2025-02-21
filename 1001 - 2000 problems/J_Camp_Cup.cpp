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
bool comp(pair<string, int> p1, pair<string, int> p2)
{
  if (p1.second == p2.second)
    return p1.first < p2.first;
  return p1.second > p2.second;
}

int main()
{
  setup();
  int t;
  cin >> t;
  map<string, ll> mp;
  while (t--)
  {
    int n;
    cin >> n;
    int x = 1000.0;
    for (int i = 0; i < n; i++)
    {
      string s;
      cin >> s;
      mp[s] += x;
      x = round(x * 0.9);
    }
  }
  vector<pair<string, ll>> arr;
  for (auto &x : mp)
  {
    arr.push_back({x.first, x.second});
  }
  sort(all(arr), comp);
  cout << arr[0].first << el;
  for (auto &x : arr)
  {
    cout << x.first << " " << x.second << el;
  }
  return 0;
}