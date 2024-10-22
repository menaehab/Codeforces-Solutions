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
#define ll long long
#define el "\n"
#define all(arr) arr.begin(), arr.end()
#define allr(arr) arr.rbegin(), arr.rend()
#define in freopen("input.in", "r", stdin);
#define out freopen("output.out", "w", stdout);
#define speedup ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
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
vector<ll> divsrs(ll k)
{
	vector<ll> arr;
	for (ll i = 1; i <= sqrt(k); i++) 
	{
		if (k % i == 0) {
			arr.push_back(i);
			if (i != k / i) {
				arr.push_back(k / i);
			}
		}
	}
	return arr;
}
int main()
{
	speedup;
	int tt;
	cin >> tt;
	while (tt--) 
	{
		ll x, y, z,k, res = 0;
		cin >> x >> y >> z >> k;
		vector<ll> arr = divsrs(k);
		for (ll i = 0; i < arr.size(); i++) 
		{
			for (ll j = 0; j < arr.size(); j++) 
			{
				if (k % (arr[i] * arr[j]) == 0)
				{
					ll a = arr[i], b = arr[j], c = k / (a * b);
					if (a <= x && b <= y && c <= z)
					{
						res = max(res, (x - a + 1) * (y - b + 1) * (z - c + 1));
					}
					if (a <= x && c <= y && b <= z)
					{
						res = max(res, (x - a + 1) * (y - c + 1) * (z - b + 1));
					}
					if (b <= x && a <= y && c <= z) 
					{
						res = max(res, (x - b + 1) * (y - a + 1) * (z - c + 1));
					}
					if (b <= x && c <= y && a <= z) 
					{
						res = max(res, (x - b + 1) * (y - c + 1) * (z - a + 1));
					}
					if (c <= x && a <= y && b <= z)
					{
						res = max(res, (x - c + 1) * (y - a + 1) * (z - b + 1));
					}
					if (c <= x && b <= y && a <= z)
					{
						res = max(res, (x - c + 1) * (y - b + 1) * (z - a + 1));
					}
				}
			}
		}
		cout << res << el;
	}
}