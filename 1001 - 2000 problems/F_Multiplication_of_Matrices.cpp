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
int a, b, x, y;
vector<vector<int>> ans;
int main()
{
  setup();
  cin >> a >> b;
  vector<vector<int>> arr1(a, vector<int>(b));
  for (int i = 0; i < a; i++)
  {
    for (int j = 0; j < b; j++)
    {
      cin >> arr1[i][j];
    }
  }
  cin >> x >> y;
  vector<vector<int>> arr2(x, vector<int>(y));
  for (int i = 0; i < x; i++)
  {
    for (int j = 0; j < y; j++)
    {
      cin >> arr2[i][j];
    }
  }
  ans.resize(a, vector<int>(y));
  for (int i = 0; i < a; i++)
  {
    for (int j = 0; j < y; j++)
    {
      for (int k = 0; k < b; k++)
      {
        ans[i][j] += arr1[i][k] * arr2[k][j];
      }
    }
  }
  for (int i = 0; i < a; i++)
  {
    for (int j = 0; j < y; j++)
    {
      cout << ans[i][j] << " ";
    }
    cout << el;
  }

  return 0;
}