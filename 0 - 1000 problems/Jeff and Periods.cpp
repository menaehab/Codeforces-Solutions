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
#define speedup ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define el "\n"
#define all(arr) arr.begin(), arr.end()
#define allr(arr) arr.rbegin(), arr.rend()
#define in freopen("input.in", "r", stdin);
#define out freopen("output.out", "w", stdout);
using namespace std;
int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}
bool isPrime(int n)
{
	if (n <= 1)
		return false;

	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return false;

	return true;
}
int lcm(int a, int b)
{
	return a / gcd(a, b) * b;
}
bool lucky(string x)
{
	for (int i = 0; i < x.size(); i++)
		if (x[i] != '4' && x[i] != '7')
			return false;

	return true;
}
int main()
{
	speedup;
    int n, x, k;
    map<int, vector<int>> mp;
    vector<pair<int, int>> arr;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        mp[x].push_back(i);
    }
    map<int, vector<int>>::iterator p = mp.begin();
    while (p != mp.end())
    {
        k = p->first;
        if (mp[k].size() == 1)
        {
            arr.push_back({ k,0 });
        }
        else
        {
            set<int> s;
            for (int i = 1; i < mp[k].size(); i++)
            {
                s.insert(abs(mp[k][i] - mp[k][i - 1]));
            }
            set<int>::iterator q = s.begin();
            if (s.size() == 1)
            {
                arr.push_back({ k,*q });
            }
        }
        p++;
    }
    cout << arr.size() << el;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i].first << " " << arr[i].second << el;
    }
} 