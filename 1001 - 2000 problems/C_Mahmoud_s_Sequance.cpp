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
bool isSubsetSumRec(vector<ll> &arr, ll n, ll sum)
{
  if (sum == 0)
    return true;
  if (n == 0)
    return false;
  if (arr[n - 1] > sum)
    return isSubsetSumRec(arr, n - 1, sum);
  return isSubsetSumRec(arr, n - 1, sum) || isSubsetSumRec(arr, n - 1, sum - arr[n - 1]);
}

bool isSubsetSum(vector<ll> &arr, ll sum)
{
  return isSubsetSumRec(arr, arr.size(), sum);
}
int main()
{
  setup();
  ll n, k;
  cin >> n >> k;
  vector<ll> arr(n);
  map<ll, ll> mp;
  ll sum = 0;
  mp[0] = 1;
  for (ll i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  bool f = false;
  for (ll i = 0; i < n; i++)
  {
    sum += arr[i];
    ll m = sum % k;
    if (isSubsetSum(arr, m))
    {
      f = true;
      break;
    }
  }
  if (f)
    cout << "YES";
  else
    cout << "NO";
  return 0;
}