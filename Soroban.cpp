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
    unordered_map<int,string>mp ={
        {0,"O-|-OOOO"},
        {1,"O-|O-OOO"},
        {2,"O-|OO-OO"},
        {3,"O-|OOO-O"},
        {4,"O-|OOOO-"},
        {5,"-O|-OOOO"},
        {6,"-O|O-OOO"},
        {7,"-O|OO-OO"},
        {8,"-O|OOO-O"},
        {9,"-O|OOOO-"},
    };
    string s;
    cin >> s;
    for (int i = s.size() - 1; i >= 0; --i) {
        cout << mp[s[i] - '0'] << el;
    }
    return 0;
}
