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
	queue<int>q;
	while (t--)
	{
		int n, x;
		cin >> n;
		if (n == 1)
		{
			cin >> x;
			q.emplace(x);
		}
		else if (n == 2)
		{
			if (!q.empty())
			{
				q.pop();
			}
		}
		else if (n == 3)
		{
			if (!q.empty())
			{
				cout << q.front() << el;
			}
			else
			{
				cout << "Empty!" << el;
			}
		}
	}
}