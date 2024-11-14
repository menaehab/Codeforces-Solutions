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
    double c, t;
    cin >> c >> t;
    double l = 0, r = t - 1, n;
    while (abs(l - r) > 0.0000001)
    {
        n = (l + r) / 2;
        if ((c * n * log(n) / log(2)) <= t)
        {
            l = n;
        }
        else
            r = n;
    }
    cout << fixed << setprecision(6) << l;
    return 0;
}