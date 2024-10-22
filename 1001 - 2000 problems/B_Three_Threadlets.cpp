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
        int a, b, c;
        cin >> a >> b >> c;
        int mn = min({a, b, c});
        bool flag = true;
        ll cnt = 0;
        if (a % mn != 0 || b % mn != 0 || c % mn != 0)
            flag = false;
        while (a != mn)
        {
            if (a % mn != 0 || cnt > 3)
            {
                flag = false;
                break;
            }
            a -= mn;
            cnt++;
        }
        while (b != mn)
        {
            if (b % mn != 0 || cnt > 3)
            {
                flag = false;
                break;
            }
            b -= mn;
            cnt++;
        }
        while (c != mn)
        {
            if (c % mn != 0 || cnt > 3)
            {
                flag = false;
                break;
            }
            c -= mn;
            cnt++;
        }
        if (cnt > 3)
            flag = false;
        if (flag)
            cout << "YES" << el;
        else
            cout << "NO" << el;
    }

    return 0;
}