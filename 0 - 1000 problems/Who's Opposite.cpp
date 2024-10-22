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
		int a, b, c;
		cin >> a >> b >> c;
		if (abs(a - b) * 2 < a || abs(a - b) * 2 < b || abs(a - b) * 2 < c)
		{
			cout << "-1" << el;
			continue;
		}
		if (c + abs(a - b) <= abs(a - b) * 2)
		{
			cout << c + abs(a - b) << el;
		}
		else
		{
			cout << c - abs(a - b) << el;
		}
		
	}
}