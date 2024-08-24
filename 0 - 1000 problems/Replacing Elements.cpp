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
		int n, k;
		cin >> n >> k;
		vector<int>arr(n);
		bool flag1 = true, flag2 = false;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		for (int i = 0; i < n; i++)
		{
			if (arr[i] > k)
			{
				flag1 = false;
			}
			for (int j = i + 1; j < n; j++)
			{
				if (arr[j] > k)
				{
					flag1 = false;
				}
				if ((arr[i] + arr[j] <= k) &&(i != j))
				{
					flag2 = true;
					break;
				}
			}
			if (flag2)
			{
				break;
			}
		}
		if (flag1 || flag2)
		{
			cout << "YES" << el;
		}
		else
		{
			cout << "NO" << el;
		}
	}
}