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
	int n,mx = 0,res = 0;
	cin >> n;
	vector<int>arr(n),freq(200005,0);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];		
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			freq[arr[i] + arr[j]]++;
			res = max(res, freq[arr[i] + arr[j]]);
		}
	}
	cout << res;
}