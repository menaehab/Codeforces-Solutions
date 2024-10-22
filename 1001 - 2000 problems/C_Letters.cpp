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
    int n, m, t;
    cin >> n >> m;
    vector<ll> a(n), pfx(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        pfx[i + 1] = pfx[i] + a[i];
    }
    for (int i = 0; i < m; i++)
    {
        ll b;
        cin >> b;
        int idx = lower_bound(all(pfx), b) - pfx.begin();
        ll res = b - pfx[idx - 1];
        cout << idx << ' ' << res << el;
    }
    return 0;
}