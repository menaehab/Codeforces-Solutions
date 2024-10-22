#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <iomanip>
#include <string>
#include <set>
#include <queue>
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
		return a;
	return gcd(b, a % b);
}
bool isPrime(int n)
{
	if (n <= 1)
		return false;

	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return false;

	return true;
}
int lcm(int a, int b)
{
	return a / gcd(a, b) * b;
}
bool lucky(string x)
{
	for (int i = 0; i < x.size(); i++)
		if (x[i] != '4' && x[i] != '7')
			return false;

	return true;
}
int main()
{
	speedup;
	int n,a,b = 0,c = 0,d = 0;
	cin >> n;
	a = n;
	d = n - 1;
	for (int j = 0; j < (n + n) + 1; j++)
	{
		
		if (j <= n)
		{
			for (int i = 0; i < a; i++)
			{
				cout << "  ";
			}
			if (j != 0)
			{
				for (int i = 0; i <= b; i++)
				{
					cout << i << " ";
				}
			}
			a--;
			if (j != 0)
			{
				for (int i = b - 1; i > 0; i--)
				{
					cout << i << " ";
				}
			}
			if (b != n)
			{
				b++;
			}
		}
		else
		{
			for (int i = 0; i <= c; i++)
			{
				cout << "  ";
			}
			c++;
			if (j != (n + n))
			{
				for (int i = 0; i <= d; i++)
				{
					cout << i << " ";
				}
			}
			for (int i = d - 1; i > 0; i--)
			{
				cout << i << " ";
			}
			d--;
		}
		cout << "0" << el;
	}
}