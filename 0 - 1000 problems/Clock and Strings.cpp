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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        bool flag1 = false, flag2 = false;
        ll tmp = max(a, b);
        a = min(a, b);
        b = tmp;
        for (int i = a; i <= b; i++)
        {
            if (c == i)
            {
                flag1 = true;
            }
            if (d == i)
            {
                flag2 = true;
            }
        }
        if ((flag1 && flag2) || (!flag1 && !flag2))
        {
            cout << "NO" << '\n';
        }
        else
        {
            cout << "YES" << '\n';
        }
    }
}