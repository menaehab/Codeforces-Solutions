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
        int n;
        cin >> n;
        if (n > 45)
            cout << -1 << el;
        else if (n < 10)
            cout << n << el;
        else
        {
            int x = 9;
            vector<ll> v;
            while (n >= x && n)
            {
                v.push_back(x);
                n -= x;
                x--;
                if (n <= x)
                {
                    v.push_back(n);
                    break;
                }
            }
            sort(all(v));
            for (auto it : v)
                cout << it;
            cout << el;
        }
    }
    return 0;
}