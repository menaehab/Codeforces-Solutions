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
int main()
{
  setup();
  int n;
  cin >> n;
  vector<int> arr(n), MN, MX;
  for (int &x : arr)
    cin >> x;
  int mn = *min_element(all(arr));
  int mx = *max_element(all(arr));
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == mn)
      MN.push_back(i);
    if (arr[i] == mx)
      MX.push_back(i);
  }
  sort(all(MX));
  sort(all(MN));
  int i = 0, j = 0, res = INT_MAX;
  while (i < MN.size() && j < MX.size())
  {
    res = min(res, abs(MN[i] - MX[j]));
    if (MN[i] < MX[j])
      i++;
    else
      j++;
  }
  cout << res << el;
  return 0;
}