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
  int n;
  cin >> n;
  deque<int> dq(n);
  for (int i = 0; i < n; i++)
  {
    cin >> dq[i];
  }
  int pos = 0;
  string s = "";
  while (!dq.empty())
  {
    if (dq.front() > pos && dq.back() > pos)
    {
      if (dq.front() < dq.back())
      {
        s += 'L';
        pos = dq.front();
        dq.pop_front();
      }
      else
      {
        s += 'R';
        pos = dq.back();
        dq.pop_back();
      }
    }
    else if (dq.front() > pos)
    {
      s += 'L';
      pos = dq.front();
      dq.pop_front();
    }
    else if (dq.back() > pos)
    {
      s += 'R';
      pos = dq.back();
      dq.pop_back();
    }
    else
      break;
  }
  cout << s.size() << el << s;
  return 0;
}