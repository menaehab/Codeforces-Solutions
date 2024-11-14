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
        int n, s;
        cin >> n >> s;
        int tmp = 0, v = 0, x;
        for (int i = 0; i < n; i++) {
            cin >> x;
            tmp += x;
            v = max(v, x);
        }
        int sum = (v * (v + 1)) / 2;
        while (sum - tmp < s) {
            v++;
            sum = (v * (v + 1)) / 2;
        }

        if (sum - tmp == s)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
	}
}