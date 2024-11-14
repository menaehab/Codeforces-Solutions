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
    int n,k,m,idx = 1;
    ll res = 0;
    cin >> n >> k >> m;
    vector<string>s(n);
    vector<int>c(n);
    map<string,pair<int,int>>v;
    map<int,int>mn,con;
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
        v[s[i]] = {c[i], i};
    }
    for (int i = 0; i < n; ++i) {
        cin >> c[i];
        v[s[i]].first = c[i];
    }
    while (k--) {
        int x, a;
        cin >> x;
        for (int i = 0; i < x; ++i) {
            cin >> a;
            if (mn[idx])
                mn[idx] = min(mn[idx], v[s[a - 1]].first);
            else
                mn[idx] = v[s[a - 1]].first;

            con[a] = idx;
        }
        idx++;
    }
    string z;
    for (int i = 0; i < m; ++i) {
        cin >> z;
        int x = v[z].second + 1;
        res += mn[con[x]];
    }
    cout << res;
    return 0;
}
