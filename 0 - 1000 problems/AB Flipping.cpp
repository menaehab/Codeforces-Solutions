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
        int n;
        string s;
        cin >> n >> s;
        int x = n, y = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'A')
            {
                x = min(i, x);
            }
            if (s[i] == 'B')
            {
                y = max(i, y);
            }
        }
        if (x > y)
        {
            cout << 0 << el;
        }
        else
        {
            cout << y - x << el;
        }
	}
}