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
    int t;
    cin >> t;
    while (t--)
    {
        string x, y, ans = "";
        cin >> x >> y;
        int n = x.size(), m = y.size(), mn = min(n, m);
        for (int i = 0; i < mn; i++)
        {
            ans += x[i];
            ans += y[i];
        }
        if (n > m)
            ans += x.substr(mn);
        else if (m > n)
            ans += y.substr(mn);
        cout << ans << el;
    }
    return 0;
}