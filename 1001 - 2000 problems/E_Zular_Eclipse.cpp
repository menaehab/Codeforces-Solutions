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
    int n;
    cin >> n;
    vector<ll> arr(n), pfx(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(all(arr));
    for (int i = 0; i < n; i++)
    {
        pfx[i + 1] = pfx[i] + arr[i];
    }
    int q;
    cin >> q;
    while (q--)
    {
        ll x;
        cin >> x;
        if (x < arr[0])
            cout << -1 << el;
        else
        {
            ll l = 0, r = n - 1, res = 0;
            while (l <= r)
            {
                ll mid = (r + l) / 2;
                if (arr[mid] <= x)
                {
                    l = mid + 1;
                    res = l;
                }
                else
                    r = mid - 1;
            }
            cout << res << " " << pfx[res] << el;
        }
    }

    return 0;
}