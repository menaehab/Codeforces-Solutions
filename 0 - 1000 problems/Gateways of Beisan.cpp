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
    int n;
    string s;
    cin >> n >> s;
    bool flag = false;
    unordered_map<char,int>mp;
    for (int i = 0; i < n; ++i) {
        if ((s[i] == s[i + 1] && s[i] != s[i + 2]) || (s[i] != s[i + 1] && s[i] == s[i + 2]) && i + 2 < n) {
            flag = true;
            break;
        } else if (s[i] != s[i + 1] && s[i + 1] == s[i + 2] && i + 2 < n) {
            flag = true;
            break;
        }
        mp[s[i]]++;
    }
    if (flag || mp[s[0]] == n) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}
