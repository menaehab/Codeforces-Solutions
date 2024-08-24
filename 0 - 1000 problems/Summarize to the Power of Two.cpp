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
    ll n,res = 0;
    cin >>n;
    vector<ll>arr(n),d(33);
    unordered_map<ll,ll>mp;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    for (int i = 0; i < 33; ++i) {
        d[i] = (1LL << i);
    }
    for (int i = 0; i < n; ++i) {
        mp[arr[i]]--;
        bool flag = false;
        for (int j = 0; j < 33; ++j) {
            long long x = d[j] - arr[i];
            if (mp[x] > 0) {
                flag = true;
                break;
            }
        }
        if (!flag) {
            res++;
        }
        mp[arr[i]]++;
    }
    cout << res;
    return 0;
}
