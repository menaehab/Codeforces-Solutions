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
	string s;
	cin >> s;
	map<char, ll>mp;
	for (char i = 'a'; i <= 'z'; i++)
	{
		ll k;
		cin >> k;
		mp[i] = k;
	}
	ll res = 0;
	int n = s.size();
	for (int i = 0; i < n; i++) 
	{
		if (s[i] == '?') 
		{
			int cnt = 0;
			while (i + cnt < n && s[i + cnt] == '?')
			{
				cnt++;
			}
			if (i == 0 && i + cnt == n) 
			{
				cout << 0 << el;
				for (int j = 0; j < n; j++) 
				{
					cout << 'a';
				}
				return 0;
			}
			else if (i == 0) 
			{
				int mn = INT_MAX, idx;
				for (int z = 0; z < 26; z++) 
				{
					int c = abs(mp[s[cnt]] - mp['a' + z]);
					if (mn > c)
					{
						mn = c;
						idx = z;
					}
				}
				char re = 'a' + idx;
				for (int j = 0; j < cnt; j++)
				{
					s[j] = re;
				}
				i += cnt - 1;
			}
			else if (i + cnt == n)
			{
				int mn = INT_MAX, idx;
				for (int z = 0; z < 26; z++)
				{
					int c = abs(mp[s[i - 1]] - mp['a' + z]);
					if (mn > c)
					{
						mn = c;
						idx = z;
					}
				}
				char re = 'a' + idx;
				for (int j = i; j < n; j++)
				{
					s[j] = re;
				}
				break;
			}
			else
			{
				int mn = INT_MAX, idx;
				for (int x = 0; x < 26; x++) 
				{
					int c = abs(mp[s[i - 1]] - mp['a' + x]) + abs(mp['a' + x] - mp[s[i + cnt]]);
					if (mn > c)
					{
						mn = c;
						idx = x;
					}
				}
				char re = 'a' + idx;
				for (int j = i; j < i + cnt; j++) 
				{
					s[j] = re;
				}
				i += cnt - 1;
			}
		}
	}
	for (int i = 0; i < n - 1; i++)
	{
		res += abs(mp[s[i]] - mp[s[i + 1]]);
	}
	cout << res << el << s << el;
}