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
		int x, y,cell2, recells, cell1;
		cin >> x >> y;
        cell2 = (y + 1) / 2;
        recells = 15 * cell2 - 4 * y;
        if (recells >= x) 
        {
            cout << cell2 << el;
        }
        else
        {
            x -= recells;
            cell1 = (x + 14) / 15; 
            cout << cell2 + cell1 << el;
        }
    }
}