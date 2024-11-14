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
#include <unordered_map>
#include <unordered_set>
#define speedup ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define el "\n"
#define all(arr) arr.begin(), arr.end()
#define allr(arr) arr.rbegin(), arr.rend()
#define in freopen("input.in", "r", stdin);
#define out freopen("output.out", "w", stdout);
#define pi 3.141592653589793230
using namespace std;
const int sz = 1e6 + 10;
bool composite[sz];
vector<ll>primes;
void sieve()
{
	composite[0] = composite[1] = true;
	for (int i = 2; i * i <= sz; i++)
	{
		if (!composite[i])
		{
			for (int j = i * i; j <= sz; j += i)
			{
				composite[j] = true;
			}
		}
	}
}
void linearSieve(int n)
{
	composite[0] = composite[1] = true;
	for (int i = 2; i <= n; i++)
	{
		if (!composite[i])
		{
			primes.push_back(i);
		}
		for (int j = 0; j < primes.size(); j++)
		{
			if (i * primes[j] > n)
			{
				break;
			}
			composite[i * primes[j]] = true;
			if (i % primes[j] == 0)
			{
				break;
			}
		}
	}
}
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
int binarySearch(vector<int>arr, int low, int high, int x)
{
	while (low <= high) {
		int mid = low + (high - low) / 2;
		if (arr[mid] == x)
			return mid;
		if (arr[mid] < x)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return -1;
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
int countBits0(int x)
{
	int cnt = 0;
	int bits = sizeof(x) * 8;
	while (x)
	{
		cnt++;
		x &= (x - 1);
	}
	return bits - cnt;
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
vector<vector<ll>> prefixSum2D(vector<vector<ll>>& a)
{
	int R = a.size();  
	int C = a[0].size();  
	vector<vector<ll>> psa(R, vector<ll>(C, 0));  
	psa[0][0] = a[0][0];
	for (int i = 1; i < C; i++)
		psa[0][i] = psa[0][i - 1] + a[0][i];
	for (int i = 1; i < R; i++)
		psa[i][0] = psa[i - 1][0] + a[i][0];
	for (int i = 1; i < R; i++) {
		for (int j = 1; j < C; j++) {
			psa[i][j] = psa[i - 1][j] + psa[i][j - 1] - psa[i - 1][j - 1] + a[i][j];
		}
	}
	return psa;
}
int main()
{
	speedup;
	int n, m,q;
	cin >> n >> m >> q;
	vector<vector<ll>>arr(n, vector<ll>(m));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}
	vector<vector<ll>>prfx = prefixSum2D(arr);
	while (q--)
	{
		ll x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
	    ll res = prfx[x2 - 1][y2 - 1];
		if (x1 > 1) 
		{
			res -= prfx[x1 - 2][y2 - 1];
		}
		if (y1 > 1) 
		{
			res -= prfx[x2 - 1][y1 - 2];
		}
		if (x1 > 1 && y1 > 1) 
		{
			res += prfx[x1 - 2][y1 - 2];
		}
		cout << res << el;
	}
}