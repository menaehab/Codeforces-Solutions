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
    while (t--) {
        string s;
        cin >> s;
        int h = stoi(s.substr(0, 2)), m = stoi(s.substr(3, 2));
        int mm = h * 5,hh = m / 5;
        if (hh == 0) {
            hh = 12;
        }
        if (mm == 60) {
            mm = 0;
        }
        cout << setw(2) << setfill('0') << hh << ":" << setw(2) << setfill('0') << mm << el;
    }
    return 0;
}
