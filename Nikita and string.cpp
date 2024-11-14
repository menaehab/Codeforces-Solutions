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
    int res = 0;
    vector<int>a(s.size() + 1),b(s.size() + 1);
    for (int i = 1; i <= s.size(); ++i) {
        a[i] = a[i - 1] + (s[i - 1] == 'a');
        b[i] = b[i - 1] + (s[i - 1] == 'b');
    }
    for (int i = 0; i <= s.size(); ++i) {
        for (int j = i; j <= s.size(); ++j) {
            int x = a[i] + (a[s.size()] - a[j]);
            int y = b[j] - b[i];
            res = max(res, x + y);
        }
    }
    cout << res;
    return 0;
}
