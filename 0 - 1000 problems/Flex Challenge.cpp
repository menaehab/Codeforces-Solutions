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
const int MOD = 1e9 + 7;
int main()
{
	speedup;
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<int>arr(n);
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		sort(all(arr));
		ll res = 1;
		arr[n - 1]--;
		for (int i = 0; i < n; i++) 
		{
			res = (arr[i] * res) % MOD;
		}
		cout << res << el;
	}
}