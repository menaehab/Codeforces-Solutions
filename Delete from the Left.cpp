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
    string x, y;
    cin >> x >> y;
    int n = 0;
    for (int i = x.size() - 1, j = y.size() - 1; i >= 0 && j >= 0; i--, j--)
    {
        if (x[i] == y[j])
        {
            n++;
        }
        else
        {
            break;
        }
    }
    cout << x.size() + y.size() - (n * 2);
}