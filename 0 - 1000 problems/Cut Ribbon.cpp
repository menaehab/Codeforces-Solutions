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
	int n,a,b,c,mn,md,mx,res = 0;
	bool flag = true;
	cin >> n >> a >> b >> c;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			int x = n - (a * i + j * b);
			if (x >= 0 && x % c == 0)
			{
				int k = x / c;
				res = max(res, i + j + k);
			}
		}
	}
	cout << res;
}