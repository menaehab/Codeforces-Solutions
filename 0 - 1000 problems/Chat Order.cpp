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
	cin >> n;
	vector<string>arr(n);
	map<string, string>mp;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		mp[arr[i]] = arr[i];
	}
	for (int i = n - 1 ; i >= 0; i--)
	{
		if (mp[arr[i]] != "")
		{
			cout << arr[i] << el;
		}
		mp[arr[i]] = "";
	}
}