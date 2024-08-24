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
    speedup
    int n,m,res = 0;
    cin >> n >> m;
    unordered_map<int,int>mp;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        mp[x]++;
    }
    for (int i = 0; i < m; ++i) {
        int x;
        cin >> x;
        if (mp[x])
            res++;
    }
    cout << res;
    return 0;
}
