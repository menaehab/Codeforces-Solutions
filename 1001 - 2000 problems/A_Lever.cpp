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
#define ll long long
#define el '\n'
#define all(arr) arr.begin(), arr.end()
#define allr(arr) arr.rbegin(), arr.rend()
#define pi 3.14159265358979323846
using namespace std;
void setup()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
int main()
{
    setup();
    string s;
    cin >> s;
    ll md = s.find('^');
    ll res = 0;
    for (int i = 0; i < md; i++)
        if (s[i] >= '1' && s[i] <= '9')
            res += (md - i) * (s[i] - '0');
    for (int i = md; i < s.size(); i++)
        if (s[i] >= '1' && s[i] <= '9')
            res -= (i - md) * (s[i] - '0');
    if (res == 0)
        cout << "balance";
    else if (res < 0)
        cout << "right";
    else
        cout << "left";
    return 0;
}