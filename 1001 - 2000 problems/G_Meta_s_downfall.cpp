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
  map<string, int> txt = {{"Facebook", 0}, {"Instagram", 0}, {"WhatsApp", 0}, {"Messenger", 0}};
  vector<string> arr(4);
  for (int i = 0; i < 3; i++)
  {
    cin >> arr[i];
    txt[arr[i]]++;
  }
  for (auto i : txt)
    if (i.second == 0)
      cout << i.first << el;
  return 0;
}