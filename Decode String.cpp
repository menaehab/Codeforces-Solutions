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
    string txt = "abcdefghijklmnopqrstuvwxyz";
    map<int, char> mp;
    for (int i = 1; i <= 26; ++i) {
        mp[i] = txt[i - 1];
    }
    int t;
    cin >> t;
    while (t--) {
        int n,x;
        string s;
        cin >> n >> s;
        string res = "";
        int i = n - 1;
        while (i >= 0) {
            if (i >= 2 && s[i] == '0') {
                x = (s[i - 2] - '0') * 10 + (s[i - 1] - '0');
                res = mp[x] + res;
                i -= 3;
            } else {
                x = s[i] - '0';
                res = mp[x] + res;
                i--;
            }
        }
        cout << res << el;
    }
    return 0;
}
