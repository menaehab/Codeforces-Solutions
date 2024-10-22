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
		int x, y;
		cin >> x >> y;
		if (x == 0 && y == 0)
		{
			cout << "0\n";
		}
		else if ((float)sqrt(pow(x, 2) + pow(y, 2)) == sqrt(pow(x, 2) + pow(y, 2)))
		{
			cout << "1\n";
		}
		else
		{
			cout << "2\n";
		}
	}
}