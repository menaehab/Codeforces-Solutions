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
    int n,a = 0,b = 0;
    cin >> n;
    vector<int>arr(n);
     for (int i = 0; i < n; ++i) {
         cin >> arr[i];
     }
    int left = 0,right = n - 1, at = 0, bt = 0;
    while (left <= right) {
        if (at <= bt) {
            at += arr[left];
            left++;
            a++;
        } else {
            bt += arr[right];
            right--;
            b++;
        }
    }
    cout << a << " " << b;
    return 0;
}
