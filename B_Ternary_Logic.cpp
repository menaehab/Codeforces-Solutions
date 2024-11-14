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
    int a, b;
    cin >> a >> b;
    string x = "", y = "", s = "";
    while (a)
    {
        x += char('0' + a % 3);
        a /= 3;
    }
    while (b)
    {
        y += char('0' + b % 3);
        b /= 3;
    }
    while (x.size() > y.size())
        y += "0";
    while (x.size() < y.size())
        x += "0";
    for (int i = 0; i < x.size(); i++)
    {
        s += char('0' + (y[i] - '0' - (x[i] - '0') + 3) % 3);
    }
    ll cnt = 1, res = 0;
    for (int i = 0; i < s.size(); i++)
    {
        res += (s[i] - '0') * cnt;
        cnt *= 3;
    }
    cout << res;
    return 0;
}