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
		ll n, x = -1, y = -1;;
		cin >> n;
		vector<int>arr(n);
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			if (arr[i] > 0 && x == -1)
				x = i;
			if (arr[i] > 0)
				y = i;
		}
		if (y == -1)
		{
			cout << n * (n + 1) / 2 << el;
			continue;
		}
		cout << ((x + 1) * (n - y)) << el;
	}
}