#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include<iomanip>
#include <string>
#include <set>
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
        string x;
        cin >> n >> x;
        set<char> st(all(x));
        string r(all(st));
        map<char, char> mp;
        int len = r.size();
        for (int i = 0; i < len; i++) 
        {
            mp[r[i]] = r[len - 1 - i];
        }
        string res;
        for (char i : x)
        {
            res += mp[i];
        }
        cout << res << el;
	}
}