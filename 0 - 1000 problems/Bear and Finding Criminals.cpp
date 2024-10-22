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
	int n, k,l,r,res = 0;
	cin >> n >> k;
	vector<int>arr(n + 1);
	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
		res += arr[i];
	}
	for (int i = 1; i < k && i <= n - k; i++)
	{
		if (arr[i + k] + arr[k - i] == 1)
		{
			res--;
		}
	}
	cout << res;
}