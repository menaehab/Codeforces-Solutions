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
	int n, k,sum = 0,x = 0, l = 0;
	cin >> n >> k;
	vector<int>arr(n), srt(n),res;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		srt[i] = arr[i];
	}
	sort(allr(srt));
	for (int i = 0; i < k; i++)
	{
		sum += srt[i];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		{
			if (arr[i] == srt[j])
			{
				res.push_back(i + 1);
				srt[j] = -1;
				x++;
				if (x == k)
				{
					break;
				}
				break;
			}
			if (x == k)
			{
				break;
			}
		}
	}
	cout << sum << el;
	for (int i = 0; i < res.size() - 1; i++)
	{
		if (i == 0)
		{
			cout << res[i] << " ";
		}
		else
		{
			cout << res[i] - res[i - 1] << " ";
		}
		if (i == res.size() - 2)
		{
			l = res[i];
		}
	}
	cout << n - l;
}