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
    int n,m,k = 0;
    cin >> n >> m;
    vector<string>arr(n);
    map<int,int>r,c,l;
    vector<vector<int>> ckd(n, vector<int>(m));
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = 1; i < n - 1; ++i) {
        for (int j = 1; j < m - 1; ++j) {
            if (arr[i][j] == '*' && arr[i - 1][j] == '*' && arr[i][j + 1] == '*' && arr[i + 1][j] == '*' && arr[i][j - 1] == '*') {
                int x = 1;
                r[k] = i + 1;
                c[k] = j + 1;
                l[k] = 0;
                while (i - x >= 0 && i + x < n && j - x >= 0 && j + x < m && arr[i - x][j] == '*' && arr[i][j + x] == '*' && arr[i + x][j] == '*' && arr[i][j - x] == '*') {
                    l[k]++;
                    ckd[i][j] = 1;
                    ckd[i - x][j] = 1;
                    ckd[i][j + x] = 1;
                    ckd[i + x][j] = 1;
                    ckd[i][j - x] = 1;
                    x++;
                }
                k++;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (arr[i][j] == '*' && ckd[i][j] == 0) {
                cout << -1;
                return 0;
            }
        }
    }
    cout << k << el;
    for (int i = 0; i < k; ++i) {
        cout << r[i] << " " << c[i] << " " << l[i] << el;
    }
    return 0;
}
