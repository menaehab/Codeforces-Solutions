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
		int a, b, c, d, mn = 1e9;
		cin >> a >> b >> c >> d;
        if (max(a, c) <= min(d, b)) 
        {
            cout << 0 << el;
            continue;
        }
        if (b < c)
        {
            int x = 23 - d + a + 1;
            mn = min(mn, c - b);
            mn = min(mn, x);
        }
        if (d < a)
        {
            int y = c + 24 - b;
            mn = min(mn, a - d);
            mn = min(mn, y);
        }
        cout << mn << el;
    }
}