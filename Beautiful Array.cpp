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
int main()
{
	speedup;
	int t;
	cin >> t;
	while (t--)
	{
		int n, k, cnt = 0, val = -1,res = 0;
		bool flag = true;
		cin >> n >> k;
		vector<int>arr(n);
		map<int, set<int>>mp;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		for (int i : arr)
		{
			if (mp[i%k].find(i) != mp[i%k].end())
			{
				mp[i % k].erase(i);
			}
			else
			{
				mp[i % k].insert(i);
			}
		}
		for (auto i : mp)
		{
			int n = i.second.size();
			if (n % 2)
			{
				cnt++;
				val = i.first;
			}
		}
		if (cnt > 1) 
		{
			cout << -1 << el;
			continue;
		}
		for (auto i : mp)
		{
			if (i.first == val)
			{
				continue;
			}
			while (i.second.size() > 0)
			{
				int x = *i.second.begin();
				i.second.erase(x);
				int tmp = *i.second.begin();
				res += (tmp - x) / k;
				i.second.erase(tmp);
			}
		}
		if (cnt)
		{
			vector<int>arr;
			for (auto i : mp[val])
			{
				arr.push_back(i);
			}
			int tt = arr.size();
			if (tt == 1)
			{
				cout << res << el;
				continue;
			}
			vector<int>prefx(n), sufx(n);
			prefx[1] = arr[1] - arr[0];
			for (int i = 0; i < n - 1; i++)
			{

			}
		}
	}
}