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
    string s;
    cin >> s;
    s = '@' + s;
    int n = s.size();
    vector<int> pfx(n + 1);
    for (int i = 1; i < n - 1; ++i) {
        pfx[i] = pfx[i - 1];
        if (s[i] == s[i + 1]) {
            pfx[i]++;
        }
    }
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
        cout << pfx[r - 1] - pfx[l - 1] << el;
    }
    return 0;
}
