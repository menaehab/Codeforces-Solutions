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
bool isPalindrome(string s)
{
	string p = s;
	reverse(all(p));
	if (s == p) 
		return true;
	else 
		return false;
}
int main()
{
	speedup;
	string x;
	cin >> x;
	int cnt = 0;
	map<char, int>mp;
	for (int i = 0; i < x.size(); i++)
	{
		mp[x[i]]++;
	}
	for (char i = 'a'; i <= 'z'; i++)
	{
		if (mp[i] % 2 != 0)
		{
			cnt++;
		}
	}
	if (!cnt || cnt % 2 != 0)
	{
		cout << "First";
	}
	else
	{
		cout << "Second";
	}
}