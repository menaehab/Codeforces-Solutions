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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int x = max(3 * a / 10, a - (a / 250) * c);
    int y = max(3 * b / 10, b - (b / 250) * d);
    if (x > y)
        cout << "Misha";
    else if (x < y)
        cout << "Vasya";
    else
        cout << "Tie";
    return 0;
}