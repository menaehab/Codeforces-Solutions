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
int main() {
    speedup;
    string s;
    cin >> s;
    map<string,int>mp;
    for (int i = 0; i < 10; ++i) {
        string x;
        cin >> x;
        mp[x] = i;
    }
    for (int i = 0; i < s.size(); i+=10) {
        string x = s.substr(i,10);
        cout << mp[x];
    }
    return 0;
}
