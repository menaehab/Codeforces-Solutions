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
		string x;
		cin >> x;
		if (x[1] < x[0])
		{
			cout << ((x[0] - 'a') * 25) + (x[1] - 'a') + 1 << el;
		}
		else
		{
			cout << ((x[0] - 'a') * 25) + (x[1] - 'a') << el;
		}
	}
}