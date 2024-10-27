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
    int n;
    string s;
    cin >> n >> s;
    bool flag = false;
    vector<vector<bool>> arr(26, vector<bool>(26));
    for (int i = 1; i < n - 1; i++)
    {
      if (arr[s[i] - 'a'][s[i + 1] - 'a'])
      {
        flag = true;
        break;
      }
      arr[s[i - 1] - 'a'][s[i] - 'a'] = true;
    }
    if (flag)
      cout << "YES" << el;
    else
      cout << "NO" << el;
  }
  return 0;
}