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
        int x, y, res = 0;
        cin >> x >> y;
        int z = x ^ y;
        if (z == 0)
        {
            res = 32;
        }
        else
        {
            while ((z & 1) == 0)
            {
                res++;
                z >>= 1;
            }
        }
        cout << (1 << res) << el;
    }
}