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
	string x;
	cin >> x;
	int res = 0,n = x.size();
	for (int i = 0; i < n - 2; i++)
	{
		if (x[i] != 'Q')
		{
			continue;
		}
		for (int j = i + 1; j < n - 1; j++)
		{
			if (x[j] != 'A')
			{
				continue;
			}
			for (int k = j + 1; k < n; k++)
			{
				if (x[k] != 'Q')
				{
					continue;
				}
				res++;
			}
		}
	}
	cout << res;
}