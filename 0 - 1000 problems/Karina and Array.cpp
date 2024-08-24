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
	int t;
	cin >> t;
	while (t--)
	{
		ll n,res = LLONG_MIN;
		cin >> n;
		vector<ll>arr(n);
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		sort(all(arr));
		for (int i = 0; i < n - 1; i++)
		{
			res = max(arr[i] * arr[i + 1], res);
		}
		cout << res << el;
	}
}