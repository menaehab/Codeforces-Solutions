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
int main()
{
    int t;
    cin >> t;
    while (t--) {
        vector<ll>arr(4);
        for (int i = 0; i < 4; ++i) {
            cin >> arr[i];
        }
        ll x = arr[0] * arr[3],y = arr[1] * arr[2];
        if (x == y)
            cout << 0 << el;
        else {
            if (x == 0 || y == 0 || x % y == 0 || y % x == 0)
                cout << 1 << el;
            else
                cout << 2 << el;
        }

    }
    return 0;
}
