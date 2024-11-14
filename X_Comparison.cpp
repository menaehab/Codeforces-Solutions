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
    string txt;
    cin >> txt;
    string res = txt;
    string x, y;
    int n = txt.size();
    for (int i = 0; i < n - 1; i++)
    {
        x.push_back(txt[i]);
        y = txt.substr(i + 1, n - i);
        sort(x.begin(), x.end());
        sort(y.begin(), y.end());
        res = min(res, x + y);
    }
    cout << res;
    return 0;
}