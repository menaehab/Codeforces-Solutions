#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <iomanip>
#include <string>
#include <set>
#include <queue>
#include <unordered_map>
#include <unordered_set>
#define speedup ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define el "\n"
#define all(arr) arr.begin(), arr.end()
#define allr(arr) arr.rbegin(), arr.rend()
#define in freopen("input.in", "r", stdin);
#define out freopen("output.out", "w", stdout);
#define pi 3.141592653589793230
using namespace std;
int main()
{
    speedup;
    string res = "";
    for(int i=1;i<=1000;i++){
        if(i%3==0)
            res += 'F';
        if(i%5==0)
            res += 'B';
    }
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool flag = false;
        for (int i = 0; i < res.size(); ++i) {
            if (res.substr(i,n) == s) {
                flag = true;
                break;
            }
        }
        if (flag)
            cout << "YES" << el;
        else
            cout << "NO" << el;
    }
    return 0;
}