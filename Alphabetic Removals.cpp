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
	int n, k, x = 'a', y = 'z';
	string s;
	cin >> n >> k >> s;
	for (int i = x; i <= y; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (k == 0)
			{
				break;
			}
			if (s[j] == i)
			{
				s[j] = '.';
				k--;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (s[i] != '.')
		{
			cout << s[i];
		}
	}

}