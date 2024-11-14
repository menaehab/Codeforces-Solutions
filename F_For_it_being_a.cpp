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
#define in freopen("input.in", "r", stdin);
#define out freopen("output.out", "w", stdout);
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
  if (n == 1508)
    cout << "pocket watches";
  else if (n == 1608)
    cout << "telescopes";
  else if (n == 1708)
    cout << "steam engines";
  else if (n == 1808)
    cout << "telephones";
  else if (n == 1908)
    cout << "airplanes";
  else if (n == 2008)
    cout << "terraforming";
  else if (n == 2108)
    cout << "exploration";
  else if (n == 2208)
    cout << "relaxing";
  else if (n == 2308)
    cout << "going above and beyond";
  else if (n == 2408)
    cout << "second chances";
  else if (n == 2508)
    cout << "the origin";
  else if (n == 2608)
    cout << "empowering the youth";
  else if (n == 2708)
    cout << "ECPC";
  return 0;
}