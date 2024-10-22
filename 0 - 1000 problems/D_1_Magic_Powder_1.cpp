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
ll n, k;
vector<int> a(1e5 + 5), b(1e5 + 5);
bool can(ll mid)
{
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] * mid > b[i])
        {
            sum += (a[i] * mid - b[i]);
        }
        if (sum > k)
            return false;
    }
    return true;
}
int main()
{
    setup();
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    ll l = 0, r = 1e10, ans = 0;
    while (r >= l)
    {
        int mid = (l + r) / 2;
        if (can(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    cout << ans;
    return 0;
}