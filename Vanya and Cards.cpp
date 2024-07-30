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
    int n,x,sum = 0,res = 0;
    cin >> n >> x;
    vector<int>arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        sum+=arr[i];
    }
    sum = abs(sum);
    while (sum > 0) {
        sum-=x;
        res++;
    }
    cout << res;
    return 0;
}
