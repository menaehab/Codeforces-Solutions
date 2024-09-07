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
    vector<int> m(5), w(5), h(2), c = {500, 1000, 1500, 2000, 2500, 3000};
    for (int i = 0; i < 5; i++)
    {
        cin >> m[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cin >> w[i];
    }
    for (int i = 0; i < 2; i++)
    {
        cin >> h[i];
    }
    ll res = 0;
    for (int i = 0; i < 5; i++)
    {
        res += max(3 * c[i] / 10, (250 - m[i]) * c[i] / 250 - w[i] * 50);
    }
    res = res + h[0] * 100 - h[1] * 50;
    cout << res;
    return 0;
}