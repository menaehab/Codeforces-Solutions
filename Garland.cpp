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
	string x, y;
	int res = 0;
	cin >> x >> y;
	map<int, int>mp1, mp2;
	for (int i = 0; i < x.size(); i++)
	{
		mp1[x[i] - 'a']++;
	}
	for (int i = 0; i < y.size(); i++)
	{
		mp2[y[i] - 'a']++;
	}
	for (int i = 0; i < 26; i++)
	{
		if (mp1[i] == 0 && mp2[i] > 0)
		{
			cout << -1;
			return 0;
		}
		res += min(mp1[i], mp2[i]);
	}
	cout << res;
}