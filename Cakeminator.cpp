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
    int n,m;
    cin >> n >> m;
    vector<string>arr(n);
    vector<int>x(n),y(m);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (arr[i][j] == 'S') {
                x[i] = 1;
                y[j] = 1;
            }
        }
    }
    int a = 0,b = 0;
    for (int i = 0; i < n; ++i) {
        if(x[i])
            a++;
    }
    for (int i = 0; i < m; ++i) {
        if(y[i])
            b++;
    }
    cout << n * m - a * b;
    return 0;
}
