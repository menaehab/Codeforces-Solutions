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
const int sz = 40;
bool composite[sz];
vector<ll> primes;
void sieve()
{
  composite[0] = composite[1] = true;
  for (int i = 2; i * i <= sz; i++)
  {
    if (!composite[i])
    {
      for (int j = i * i; j <= sz; j += i)
      {
        composite[j] = true;
      }
    }
  }
}
void linearSieve(int n)
{
  composite[0] = composite[1] = true;
  for (int i = 2; i <= n; i++)
  {
    if (!composite[i])
    {
      primes.push_back(i);
    }
    for (int j = 0; j < primes.size(); j++)
    {
      if (i * primes[j] > n)
      {
        break;
      }
      composite[i * primes[j]] = true;
      if (i % primes[j] == 0)
      {
        break;
      }
    }
  }
}
int n;
vector<bool> vis;
vector<int> arr;
set<vector<int>> ans;
void sol()
{
  if (arr.size() == n)
  {
    if (!composite[arr.back() + arr.front()])
      ans.insert(arr);
    return;
  }
  for (int i = 2; i <= n; i++)
  {
    if (!vis[i] && !composite[arr.back() + i])
    {
      vis[i] = true;
      arr.push_back(i);
      sol();
      arr.pop_back();
      vis[i] = false;
    }
  }
}
int main()
{
  setup();
  sieve();
  cin >> n;
  vis.resize(n + 1);
  arr.push_back(1);
  sol();
  for (auto x : ans)
  {
    for (auto y : x)
      cout << y << " ";
    cout << el;
  }
  return 0;
}