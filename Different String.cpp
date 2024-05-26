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
        string x;
        int index;
        cin >> x;
        bool flag = false;
        for (int i = 1; i < x.size(); i++) {
            if (x[i] != x[0]) {
                flag = true;
                break;
            }
        }
        if (!flag) {
            cout << "NO\n";
        }
        else {
            cout << "YES\n";
            for (int i = 1; i < x.size(); i++)
            {
                swap(x[i], x[i - 1]);
            }
            cout << x << el;
        }
    }
}