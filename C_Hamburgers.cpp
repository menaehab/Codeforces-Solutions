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
string s;
ll b, ss, c, pb, ps, pc, cb = 0, cs = 0, cc = 0, k;
bool can(ll mid)
{

    ll sumb = max(0LL, cb * mid - b);
    ll sums = max(0LL, cs * mid - ss);
    ll sumc = max(0LL, cc * mid - c);
    ll sum = sumb * pb + sums * ps + sumc * pc;
    return sum <= k;
}
int main()
{
    setup();
    cin >> s >> b >> ss >> c >> pb >> ps >> pc >> k;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'B')
            cb++;
        else if (s[i] == 'S')
            cs++;
        else
            cc++;
    }
    ll l = 0, r = 1e13, ans = 0;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
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