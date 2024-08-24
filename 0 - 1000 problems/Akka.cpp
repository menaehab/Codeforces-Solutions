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
    ll n,res1 = 0,res2 = 0;
    cin >> n;
    vector<int>arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(all(arr));
    if (n % 2 == 1) {
        for (int i = 0; i < n / 2; i++) {
            res2 += arr[i];
        }
        for (int i = n / 2; i < n; i++) {
            res1 += arr[i];
        }
    } else {
        for (int i = 0; i < n / 2; i++) {
            res2 += arr[i];
        }
        for (int i = n / 2; i < n; i++) {
            res1 += arr[i];
        }
    }
    cout << res1 << " " << res2;
    return 0;
}
