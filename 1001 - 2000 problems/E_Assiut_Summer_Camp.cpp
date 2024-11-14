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
    vector<pair<int, string>> arr(4);
    for (int i = 0; i < 4; i++)
    {
      cin >> arr[i].first;
    }
    arr[0].second = "Hussien", arr[1].second = "Atef", arr[2].second = "Karemo", arr[3].second = "Ezzat";
    sort(all(arr), greater<pair<int, string>>());
    cout << arr[0].second << " " << arr[1].second << el;
  }
  return 0;
}