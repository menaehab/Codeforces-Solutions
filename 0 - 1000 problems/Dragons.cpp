#include <iostream>
using namespace std;
#define FastInput ios_base::sync_with_stdio(false); cin.tie(NULL);
#include <bits/stdc++.h>
#define ll long long

int main() {
    FastInput
        int p, n;
    cin >> p >> n;

    vector<pair<int, int>> arry(n);

    for (int i = 0; i < n; i++) {
        cin >> arry[i].first;
        cin >> arry[i].second;
    }

    sort(arry.begin(), arry.end());

    for (int i = 0; i < n; i++) {
        if (p > arry[i].first) {
            p += arry[i].second;
        }
        else {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
}