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
	int x, y,z = 0;
	cin >> x >> y;
	string xs, ys,zs;
	z = x + y;
	xs = to_string(x);
	ys = to_string(y);
	zs = to_string(z);
	xs.erase(remove(xs.begin(), xs.end(), '0'), xs.end());
	ys.erase(remove(ys.begin(), ys.end(), '0'), ys.end());
	zs.erase(remove(zs.begin(), zs.end(), '0'), zs.end());
	if (stoi(xs) + stoi(ys) == stoi(zs))
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}