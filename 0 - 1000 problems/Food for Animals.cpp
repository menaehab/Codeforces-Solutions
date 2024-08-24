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
		ll a, b, c, x, y,res1,res2;
		cin >> a >> b >> c >> x >> y;
		res1 = max(0LL, x - a);
		res2 = max(0LL, y - b);
		if (res1 + res2 <= c) 
		{
			cout << "YES" << el;
		}
		else 
		{
			cout << "NO" << el;
		}
	}
}