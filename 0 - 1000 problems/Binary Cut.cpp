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
        string x,y;
        cin >> x;
        int cnt = 1, flag = 0,res = 0;
        for (int i = 1; i < x.size(); i++)
        {
            if (x[i] == x[i - 1])
            {
                continue;
            }
            else
            {
                cnt++;
            }
            if (x[i - 1] == '0' && x[i] == '1')
            {
                flag = 1;
            }
        }
        res = cnt - flag;
        cout << res  << el;
    }
}