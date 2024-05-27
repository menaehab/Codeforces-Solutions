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
	ll n,m,res1 = 0,res2 = 0;
	cin >> n;
	vector<int>arr(n + 1);
	map<int, int>mp;
	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
		mp[arr[i]] = i;
	}
	cin >> m;
	while (m--)
	{
		int x;
		cin >> x;
		res1 += mp[x];
		res2 += n + 1 - mp[x];
	}
	cout << res1 << " " << res2;
}