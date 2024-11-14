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
#define pi 3.141592653589793230
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
bool isPalindrome(string s)
{
	string p = s;
	reverse(all(p));
	if (s == p)
		return true;
	else
		return false;
}
void printBinary(int x)
{
	if (x <= 1)
	{
		cout << x;
		return;
	}
	printBinary(x >> 1);
	cout << (x & 1);
}
int countBits1(int x)
{
	int cnt = 0;
	while (x)
	{
		cnt++;
		x &= (x - 1);
	}
	return cnt;
}
int getBit(int x, int idx)
{
	return (x >> idx) & 1;
}
int setBit1(int x, int idx)
{
	return x | (1 << idx);
}
int setBit0(int x, int idx)
{
	return x & ~(1 << idx);
}
int flipBit(int x, int idx)
{
	return x ^ (1 << idx);
}
bool powerOf2(int x)
{
	return !(x & (x - 1));
}
int lastBitValue(int x)
{
	return x & ~(x - 1);
}
int setBitsTo1Until0(int n)
{
	if (n == 0)
		return -1;
	int idx = 0;
	while ((n & (1 << idx)) == 0)
	{
		n = setBit1(n, idx);
		idx++;
	}
	return n;
}
int setBitsTo0Until1(int n)
{
	int idx = 0;
	while ((n & (1 << idx)) != 0)
	{
		n = setBit0(n, idx);
		idx++;
	}
	return n;
}
int findFirstBit0(int n) 
{
	int idx = 0;
	while (getBit(n, idx) != 0)
	{
		idx++;
	}
	return idx;
}
int findFirstBit1(int n) 
{
	int idx = 0;
	while (getBit(n, idx) == 0) 
	{
		idx++;
	}
	return idx;
}
int main()
{
	speedup;
	int n, mx = INT_MIN, mn = INT_MAX, res = -1;
	cin >> n;
	vector<int> x(n), y(n);
	for (int i = 0; i < n; i++) 
	{
		cin >> x[i] >> y[i];
	}
	for (int i = 0; i < n; i++)
	{
		mn = min(mn, x[i]);
		mx = max(mx, y[i]);
	}
	for (int i = 0; i < n; i++)
	{
		if (x[i] == mn && y[i] == mx) 
		{
			res = i + 1;
			break;
		}
	}
	cout << res;
}