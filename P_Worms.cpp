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
    vector<int> arr(n + 1);
    for (int i = 1; i < n + 1; i++)
    {
        cin >> arr[i];
        arr[i] += arr[i - 1];
    }
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int l = 0, r = n, ans = 0;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (arr[mid] >= x)
            {
                r = mid - 1;
                ans = mid;
            }
            else
                l = mid + 1;
        }
        cout << ans << el;
    }

    return 0;
}