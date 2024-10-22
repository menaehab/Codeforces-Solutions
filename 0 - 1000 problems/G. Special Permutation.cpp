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
        cin >> n;
        if (n == 2 || n == 3)
        {
            cout << -1;
        }
        else
        {
            for (int i = n; i > 0; --i)
            {
                if (i % 2 != 0) {
                    cout << i << ' ';
                }
            }
            cout << 4 << ' ' << 2 << ' ';
            for (int i = 6; i <= n; i += 2)
            {
                cout << i << ' ';
            }
        }
        cout << el;
	}
}