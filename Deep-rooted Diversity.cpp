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
    int n;
    cin >> n;
    vector<int>a(n),b(n),pfx1(n + 1),pfx2(n + 2);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        pfx1[i + 1] = pfx1[i] + a[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
        pfx2[i + 1] = pfx2[i] + b[i];
    }
    int res = 0,tmp = 0;
    for (int i = 1; i <= n; ++i) {
        if (pfx1[i] > pfx2[i]) {
            tmp++;
        } else {
            res = max(res,tmp);
            tmp = 0;
        }
    }
    cout << res;
    return 0;
}
