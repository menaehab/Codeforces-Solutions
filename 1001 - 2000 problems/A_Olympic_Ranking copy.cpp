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
struct suct
{
  ll a, b, c;
  string s;
};

int main()
{
  setup();
  int n;
  cin >> n;
  vector<suct> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i].a >> arr[i].b >> arr[i].c;
    getline(cin, arr[i].s);
  }
  sort(all(arr), [](const suct &a, const suct &b)
       {
    if(a.a != b.a)
    return a.a < b.a;
    else 
    if(a.b != b.b)
    return a.b < b.b;
    else
    return a.c < b.c; });
  cout << arr[n - 1].s;

  return 0;
}