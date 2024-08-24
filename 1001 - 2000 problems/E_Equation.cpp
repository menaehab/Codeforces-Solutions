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
    double c;
    cin >> c;
    double l = 1, r = 1e18, ans = 0;
    for (int i = 0; i < 300; i++)
    {
        double mid = (l + r) / 2.0;
        double v = mid * mid + sqrt(mid);
        if (v <= c)
        {
            ans = mid;
            l = mid;
        }
        else
            r = mid;
    }
    cout.precision(15);
    cout << fixed << ans;
    return 0;
}