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
ll ans = 0;
bool can(ll mid, int n, ll k, vector<int> &arr, ll &sum)
{
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        v[i] = arr[i] + (i + 1) * mid;
    }
    sort(all(v));
    sum = 0;
    for (int i = 0; i < mid; i++)
    {
        sum += v[i];
    }
    return sum <= k;
}
int main()
{
    setup();
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int l = 0, r = n, cnt = 0;
    ll ans = 0;

    while (l <= r)
    {
        ll mid = (l + r) / 2;
        ll sum = 0;
        if (can(mid, n, k, arr, sum))
        {
            cnt = mid;
            ans = sum;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    cout << cnt << " " << ans << el;

    return 0;
}