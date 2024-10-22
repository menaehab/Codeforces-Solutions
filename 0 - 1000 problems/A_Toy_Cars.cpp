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
  int n;
  cin >> n;
  vector<vector<int>> arr(n, vector<int>(n));
  vector<int> res;
  for (int i = 0; i < n; i++)
  {
    bool flag = false;
    for (int j = 0; j < n; j++)
    {
      cin >> arr[i][j];
      if (arr[i][j] == 1 || arr[i][j] == 3)
        flag = true;
    }
    if (!flag)
      res.push_back(i + 1);
  }
  cout << res.size() << el;
  for (auto i : res)
    cout << i << " ";
  return 0;
}