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
	int n,res = 0;
	cin >> n;
	vector<int>arr(n);
	bool flag = true;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (flag)
		{
			res += arr[i];
			flag = false;
		}
		else
		{
			res -= arr[i];
			flag = true;
		}
	}
	if (abs(res) % 2 == 0)
	{
		cout << "Hamza";
	}
	else
	{
		cout << "Ahmad";
	}
}