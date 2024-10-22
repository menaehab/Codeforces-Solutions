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
ll n;
bool can(ll mid)
{
    return mid >= n || mid * (mid + 1) / 2 >= n;
}
int main()
{
    setup();
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ll l = 0, r = 1e10, ans = 0;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            if (can(mid))
            {
                r = mid - 1;
                ans = r;
            }
            else
                l = mid + 1;
        }
        cout << ans + 1 << el;
    }
    return 0;
}