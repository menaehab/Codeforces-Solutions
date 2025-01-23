#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <iomanip>
#include <string>
#include <set>
#include <queue>
#include <unordered_map>
#include <unordered_set>
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
int main()
{
  setup();
  int t;
  cin >> t;
  while (t--)
  {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n);
    for (int i = 0; i < n; i++)
    {
      arr[i].resize(m);
      for (int j = 0; j < m; j++)
      {
        cin >> arr[i][j];
      }
      sort(all(arr[i]));
    }
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        v.push_back({arr[i][j], i + 1});
      }
    }
    sort(all(v));
    vector<int> p(n);
    vector<int> freq(n + 1);
    bool f = 1;
    for (int i = 0; i < n; i++)
    {
      if (freq[v[i].second])
      {
        f = 0;
        break;
      }
      p[i] = v[i].second;
      freq[v[i].second]++;
    }
    if (!f)
    {
      cout << -1 << el;
      continue;
    }
    freq.assign(n + 1, 0);
    int crd = -1;
    int x = 0;
    for (int i = 0; i < n * m; i++)
    {
      if (x == n)
      {
        freq.assign(n + 1, 0);
        x = 0;
      }
      int cur = p[x];
      if (freq[cur])
      {
        f = 0;
        break;
      }
      bool f1 = 0;
      for (int k : arr[cur - 1])
      {
        if (k > crd)
        {
          crd = k;
          f1 = 1;
          break;
        }
      }
      if (!f1)
      {
        f = 0;
        break;
      }
      freq[cur]++;
      x++;
    }
    if (f)
    {
      for (int i = 0; i < n; i++)
      {
        cout << p[i] << " ";
      }
      cout << el;
    }
    else
    {
      cout << -1 << el;
    }
  }
  return 0;
}