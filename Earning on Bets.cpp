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
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
int main()
{
	speedup;
	int t;
	cin >> t;
	while (t--)
	{
		int n, x = 1, sum = 0;
		cin >> n;
		vector<int> arr(n), res;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		for (int i = 0; i < n; i++)
		{
			int y = gcd(x, arr[i]);
			y = arr[i] / y;
			x *= y;
		}
		for (int i = 0; i < n; i++)
		{
			sum += x / arr[i];
			res.push_back(x / arr[i]);
		}
		if (sum >= x)
		{
			cout << -1 << el;
		}
		else 
		{
			for (auto i : res) 
			{
				cout << i << " ";
			}
			cout << el;
		}
	}
}