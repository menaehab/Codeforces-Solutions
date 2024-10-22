#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include<iomanip>
#include <string>
#define speedup ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define el "\n"
#define all(arr) arr.begin(), arr.end()
#define allr(arr) arr.rbegin(), arr.rend()
#define in freopen("input.in", "r", stdin);
#define out freopen("output.out", "w", stdout);
using namespace std;
int main()
{
	speedup;
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		map<int, int>mp;
		int x,res = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			mp[x]++;
		}
		for (int i = 0; i < m; i++)
		{
			cin >> x;
			mp[x]++;
		}
		for (auto i : mp)
		{
			if (i.second > 1)
			{
				res++;
			}
		}
		cout << res << el;
	}
}