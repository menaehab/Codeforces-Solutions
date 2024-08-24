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
    int t;
    cin >> s >> t;
    int n = s.size();
    vector<int> r(n + 1),l(n + 1),b(n + 1);
    for (int i = 1; i <= n; ++i) {
        r[i] = r[i - 1];
        l[i] = l[i - 1];
        b[i] = b[i - 1];
        if (s[i - 1] == '/')
            r[i]++;
        else if (s[i - 1] == '_')
            b[i]++;
        else if (s[i - 1] == '\\')
            l[i]++;
    }
    while (t--) {
        int x, y;
        cin >> x >> y;
        int R = r[y] - r[x - 1];
        int L = l[y] - l[x - 1];
        int B = b[y] - b[x - 1];
        int pr = min(L, R);
        int res = 0;
        int f = 1;
        while (pr >= f && B >= f - 1) {
            pr -= f;
            B -= f - 1;
            f++;
            res++;
        }
        cout << res << el;
    }
    return 0;
}
