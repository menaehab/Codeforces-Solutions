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
    string x, y;
    cin >> x >> y;
    int h1 = stoi(y.substr(0, 2));
    int m1 = stoi(y.substr(3, 2));
    int h2 = stoi(x.substr(0, 2));
    int m2 = stoi(x.substr(3, 2));
    int m = m2 - m1;
    if (m < 0)
    {
        m += 60;
        h2--;
    }
    int h = h2 - h1;
    if (h < 0)
    {
        h += 24;
    }
    if (h < 10)
        cout << "0";
    cout << h << ":";
    if (m < 10)
        cout << "0";
    cout << m;
    return 0;
}