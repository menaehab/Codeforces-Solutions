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
  string x, y;
  cin >> x >> y;
  if (y.size() > x.size())
    swap(x, y);
  int idx1 = 0, idx2 = 0;
  int n = x.size(), m = y.size();
  for (int i = 0; i < n; i++)
  {
    if (x[i] > '0')
    {
      idx1 = i;
      break;
    }
  }
  for (int i = 0; i < m; i++)
  {
    if (y[i] > '0')
    {
      idx2 = i;
      break;
    }
  }
  x = x.substr(idx1, n - idx1);
  y = y.substr(idx2, m - idx2);
  n = x.size(), m = y.size();
  reverse(all(x));
  reverse(all(y));
  string ans = "";
  int carry = 0, sum;

  for (int i = 0; i < m; i++)
  {
    sum = (x[i] - '0') + (y[i] - '0') + carry;
    ans += (sum % 10) + '0';
    carry = sum / 10;
  }
  for (int i = m; i < n; i++)
  {
    sum = (x[i] - '0') + carry;
    ans += (sum % 10) + '0';
    carry = sum / 10;
  }
  if (carry)
    ans += carry + '0';
  reverse(all(ans));
  cout << ans << el;
  return 0;
}