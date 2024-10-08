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
	{
		return a;
	}
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
	int a1, a2, a3, b1, b2, b3, c1, c2, c3;
	cin >>
		a1 >> a2 >> a3 >>
		b1 >> b2 >> b3 >>
		c1 >> c2 >> c3;
	cout << (((a1 + a2 + b1) % 2 == 0) ? 1 : 0)
		<< (((a1 + a2 + a3 + b2) % 2 == 0) ? 1 : 0)
		<< (((a2 + a3 + b3) % 2 == 0) ? 1 : 0) << el
		<< (((a1 + b2 + c1 + b1) % 2 == 0) ? 1 : 0)
		<< (((a2 + b2 + c2 + b1 + b3) % 2 == 0) ? 1 : 0)
		<< (((b2 + a3 + c3 + b3) % 2 == 0) ? 1 : 0) << el
		<< (((c1 + b1 + c2) % 2 == 0) ? 1 : 0)
		<< (((c2 + c1 + c3 + b2) % 2 == 0) ? 1 : 0)
		<< (((c2 + c3 + b3) % 2 == 0) ? 1 : 0);
}
