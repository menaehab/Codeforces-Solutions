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
	int n, t;
	cin >> n >> t;
	vector<int>arr(n), sfx(n),freq(100001);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = n - 1; i >= 0; i--)
	{
		freq[arr[i]]++;
		if (freq[arr[i]] == 1)
		{
			sfx[i] = 1;
		}
	}
	for (int i = n - 2; i >= 0; i--)
	{
		sfx[i] += sfx[i + 1];
	}
	while (t--)
	{
		int x;
		cin >> x;
		cout << sfx[x - 1] << el;
	}
}