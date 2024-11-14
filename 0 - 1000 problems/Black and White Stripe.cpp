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
	int t;
	cin >> t;
	while (t--)
	{
		int n, k, res = INT_MAX,temp = 0;
		string x;
		cin >> n >> k >> x;
        for (int j = 0; j < k; j++)
        {
            if (x[j] != 'B') 
            {
                temp++;
            }
        }
        res = min(temp, res);
        for (int i = 1; i <= n - k; i++) 
        {
            if (x[i - 1] != 'B')
            {
                temp--; 
            }
            if (x[i + k - 1] != 'B') 
            {
                temp++; 
            }
            res = min(temp, res);
        }
		cout << res << el;
	}
}