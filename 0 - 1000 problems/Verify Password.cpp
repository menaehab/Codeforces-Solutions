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
    while (t--) {
        int n;
        string x;
        cin >> n >> x;
        vector<char> darr, larr;
        bool flag1 = false, flag2 = true;
        for (char i : x)
        {
            if (isdigit(i)) 
            {
                if (!larr.empty()) 
                {
                    flag1 = true;
                }
                if (!darr.empty() && darr.back() > i)
                {
                    flag2 = false;
                }
                darr.push_back(i);
            }
            else 
            {
                if (!larr.empty() && larr.back() > i)
                {
                    flag2 = false;
                }
                larr.push_back(i);
            }
        }
        if (flag1 || !flag2) 
        {
            cout << "NO" << el;
        }
        else {
            cout << "YES" << el;
        }
    }
}