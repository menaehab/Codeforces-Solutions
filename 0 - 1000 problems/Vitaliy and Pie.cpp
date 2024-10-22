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
	int n;
	string x;
	cin >> n >> x;
	int res = 0;
	map <char, int> mp;
	for (int i = 0; i < n * 2 - 2; i++) 
	{
		if (i % 2 == 0) 
		{
			mp[x[i] - 32]++;
		}
		else
		{
			if (!mp[x[i]]) 
			{
				res++;
			}
			else mp[x[i]]--;
		}
	}
	cout << res;
}