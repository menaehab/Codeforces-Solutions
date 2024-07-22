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

using namespace std;
int main()
{
	speedup;
	int t;
	cin >> t;
	while (t--)
	{
		int n, m,val = 0,tt = 0;
		string s,x;
		cin >> n >> m >> s;
		vector<int>arr(m);
		for (int i = 0; i < m; i++)
		{
			cin >> arr[i];
		}
		cin >> x;
		sort(all(x));
		map<int, int>mp;
		for (auto i : arr)
		{
			mp[i]++;
		}
		for (auto i : mp)
		{
			val = val + i.second - 1;
		}
		x = x.substr(0, m - val);
		for (auto i : mp)
		{
			int pos = i.first;
			s[pos - 1] = x[tt];
			tt++;
		}
		cout << s << el;
	}
}