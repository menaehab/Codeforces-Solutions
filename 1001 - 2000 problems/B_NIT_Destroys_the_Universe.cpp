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
        int n, k, cnt = 0, cnt1 = 0, cnt2 = 0;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (!arr[i])
                cnt1++;
            if (arr[i])
                cnt2++;
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i])
            {
                while (arr[i] && i < n)
                    i++;
                cnt++;
            }
        }
        if (!cnt1)
            cout << 1 << el;
        else if (cnt1 && cnt2)
            cout << min(cnt, 2) << el;
        else
            cout << 0 << el;
    }
    return 0;
}