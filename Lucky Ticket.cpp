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
	int n;
	string x;
	cin >> n >> x;
	bool flag1 = true, flag2 = true;
	for (int i = 0; i < n; i++)
	{
		if (x[i] != '4' && x[i] != '7')
		{
			flag1 = false;
			break;
		}
	}
	if (flag1)
	{
		int sum1 = 0, sum2 = 0;
		for (int i = 0; i < n / 2; i++)
		{
			sum1 += int(x[i]);
		}
		for (int i = (n / 2); i < n; i++)
		{
			sum2 += int(x[i]);
		}
		if (sum1 != sum2)
		{
			flag2 = false;
		}
	}
	if (flag1 && flag2)
	{
		cout << "YES" << el;
	}
	else
	{
		cout << "NO" << el;
	}
	
}