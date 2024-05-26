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
    int n, k;
    ll res = 0;
	cin >> k >> n;
	vector<pair <int, int>>arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i].first >> arr[i].second;
	}
	sort(allr(arr), [](const pair<int, int>& a, const pair<int, int>& b)
	{
		return a.second < b.second;
	});
	int i = 0;
    while (k > 0 && i < n)
    {
        if (arr[i].first == 0)
        {
            i++;
        }
        else if (arr[i].first <= k)
        {
            res += arr[i].second * arr[i].first;
            k -= arr[i].first;
            arr[i].first = 0;
        }
        else if (arr[i].first > k)
        {
            res += arr[i].second * k;
            arr[i].first -= k;
            k = 0;
        }
        else
        {
            res += arr[i].second;
            k--;
            arr[i].first--;
        }
    }
	cout << res;
}