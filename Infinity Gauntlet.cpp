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
    int t;
    cin >> t;
    cout << 6 - t << el;
    string s;
    unordered_map<string,string>mp = {
        {"purple", "Power"},
        {"green", "Time"},
        {"blue", "Space"},
        {"orange", "Soul"},
        {"red", "Reality"},
        {"yellow", "Mind"}
    };
    unordered_map<string, bool>res = {
        {"purple", true},
        {"green", true},
        {"blue", true},
        {"orange", true},
        {"red", true},
        {"yellow", true}
    };
    while (t--) {
        cin >> s;
        res[s] = false;
    }
    for (auto i : res) {
        if (i.second) {
            cout << mp[i.first] << el;
        }
    }
    return 0;
}