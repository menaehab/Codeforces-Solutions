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
        int tmp = 0, res = 0;
        map<char, int> mp;
        cin >> x;
        for (int i = 0; i < x.size(); i++) 
        {
            if (mp[x[i]] == 0) 
            {
                tmp++;
            }
            mp[x[i]]++;
            if (tmp > 3) 
            {
                res++;
                mp.clear();
                mp[x[i]] = 1;
                tmp = 1;
            }
        }
        if (tmp) 
        {
            res++;
        }
        cout << res << el;
    }
}