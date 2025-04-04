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
  ll n, k;
  cin >> n >> k;
  vector<ll> arr;
  for (int i = 2; i * i <= n && k > 1; i++)
  {
    while (n % i == 0 && k > 1)
    {
      arr.push_back(i);
      n /= i;
      k--;
    }
  }

  if (k == 1 && n > 1)
    arr.push_back(n), k--;
  if (k == 0)
  {
    for (int i = 0; i < arr.size(); i++)
    {
      cout << arr[i] << " ";
    }
  }
  else
    cout << -1;
  return 0;
}