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
        ll n;
        cin >> n;
        vector<ll> arr(n);
        ll mx = 0, idx = -1, sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mx = max(mx, arr[i]);
            if (arr[i] == mx)
            {
                idx = i;
            }
            sum += arr[i];
        }
        ll l = 0, r = 1e15, ans = -1;
        while (l <= r)
        {
            ll mid = l + r >> 1;
            vector<ll> v = arr;
            v[idx] += mid;
            sum += mid;
            ll c = 0;
            for (int i = 0; i < n; i++)
            {
                c += (v[i] * 2 * n < sum);
            }
            if (c > n / 2)
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
            sum -= mid;
        }
        cout << ans << el;
    }
    return 0;
}