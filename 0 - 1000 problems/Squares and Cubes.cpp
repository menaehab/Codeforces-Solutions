#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include<iomanip>
#include <string>
#include <set>
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
		int n;
		cin >> n;
		set<int>res;
		for (int i = 1; i * i<= n; i++)
		{
			res.insert(i * i);
		}
		for (int i = 1; i * i * i<= n; i++)
		{
			res.insert(i * i * i);
		}
		cout << res.size() << el;
	}
}