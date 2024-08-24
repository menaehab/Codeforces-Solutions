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
    int t;
    cin >> t;
    while (t--) {
        int n,m,k;
        bool flag = false;
        cin >> n >> m >> k;
        vector<pair<int,int>>arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i].first >> arr[i].second;
        }
        for (int i = 1; i < n; ++i) {
            if (m <= arr[i].first - arr[i - 1].second) {
                flag = true;
                break;
            }
        }
        if (!flag) {
            if (arr[0].first - 0 >= m || k - arr[n - 1].second >= m)
                flag = true;
        }
        if (flag)
            cout << "YES" << el;
        else
            cout << "NO" << el;
    }
    return 0;
}
