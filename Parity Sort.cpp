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
		int n; 
		cin >> n;
		bool flag = true;
		vector<int>arr(n),cpy(n);
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			cpy[i] = arr[i];
		}
		sort(all(cpy));
		for (int i = 0; i < n; i++)
		{
			if ((arr[i] % 2 == 0 && cpy[i] % 2 != 0) || (arr[i] % 2 != 0 && cpy[i] % 2 == 0))
			{
				flag = false;
				break;
			}
		}
		if (flag)
		{
			cout << "YES" << el;
		}
		else
		{
			cout << "NO" << el;
		}
	}
}