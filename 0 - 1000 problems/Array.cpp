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
	int n;
	cin >> n;
	vector<int>neg, pos, zero;
	while (n--)
	{
		int x;
		cin >> x;
		if (x == 0)
		{
			zero.push_back(x);
		}
		else if (x > 0)
		{
			pos.push_back(x);
		}
		else if (x < 0)
		{
			neg.push_back(x);
		}
	}
	if (pos.empty())
	{
		pos.push_back(neg.at(neg.size() - 1));
		pos.push_back(neg.at(neg.size() - 2));
		neg.erase(neg.begin() + neg.size() - 1);
		neg.erase(neg.begin() + neg.size() - 1);
	}
	if (neg.size() % 2 == 0)
	{
		zero.push_back(neg.at(neg.size() - 1));
		neg.erase(neg.begin() + neg.size() - 1);
	}
	cout << neg.size() << " ";
	for (int i = 0; i < neg.size(); i++)
	{
		cout << neg[i] << " ";
	}
	cout << el << pos.size() << " ";
	for (int i = 0; i < pos.size(); i++)
	{
		cout << pos[i] << " ";
	}
	cout << el << zero.size() << " ";
	for (int i = 0; i < zero.size(); i++)
	{
		cout << zero[i] << " ";
	}

}