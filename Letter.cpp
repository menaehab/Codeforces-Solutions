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
	getline(cin, x);
	getline(cin, y);
	vector<int>freq(256);
	bool flag = true;
	for (int i = 0; i < x.size(); i++)
	{
		freq[x[i]]++;
	}
	for (int i = 0; i < y.size(); i++)
	{
		if (y[i] != ' ')
		{
			freq[y[i]]--;
			if (freq[y[i]] < 0)
			{
				flag = false;
				break;
			}
		}
	}
	if (flag)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}