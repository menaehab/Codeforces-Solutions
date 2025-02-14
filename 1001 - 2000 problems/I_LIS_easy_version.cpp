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
int n;
vector<int> arr;
int sol(int i = 0, int k = -1)
{
  if (i == n)
    return 0;
  int a = sol(i + 1, k), b = 0;
  if (arr[i] > k)
  {
    b = sol(i + 1, arr[i]) + 1;
  }
  return max(b, a);
}

int main()
{
  setup();
  cin >> n;
  arr.resize(n);
  for (auto &x : arr)
    cin >> x;
  cout << sol();
  return 0;
}