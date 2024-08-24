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
    ll n, k, res = 0;
    cin >> n >> k;
    vector<ll>arr(n);
    map<ll, ll>mp;
    set<pair<ll, ll>>st;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    for (ll i = 0; i < n; ++i) {
        if (mp[k - arr[i]] != 0 && st.count({min(arr[i], k - arr[i]), max(arr[i], k - arr[i])}) == 0) {
            if (arr[i] == k - arr[i]) {
                if (mp[arr[i]] > 1)
                    res += (mp[arr[i]] * (mp[arr[i]] - 1)) / 2;
            } else
                res += mp[arr[i]] * mp[k - arr[i]];
            st.insert({min(arr[i], k - arr[i]), max(arr[i], k - arr[i])});
        }
    }
    cout << res;
    return 0;
}