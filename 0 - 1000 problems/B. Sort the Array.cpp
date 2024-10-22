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
	int n,l = -1,r = -1;
	cin >> n;
	vector<int>arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n - 1; i++)
	{
		if (arr[i] < arr[i + 1] && l == -1)
		{
			continue;
		}
		else if(arr[i] > arr[i + 1] && l == -1)
		{
			l = i;
		}
		else if (arr[i] < arr[i + 1] && r == -1)
		{
			r = i;
		}
	}
	if (l == -1)
	{
		cout << "yes" << el << "1 1";
		return 0;
	}
	if (r == -1)
	{
		r = n - 1;
	}
	reverse(arr.begin() + l, arr.end() - (n - 1 - r));
	for (int i = 0; i < n - 1; i++)
	{
		if (arr[i] > arr[i + 1])
		{
			cout << "no" << el;
			return 0;
		}
	}
	cout << "yes" << el << l + 1 << " " << r + 1;
}