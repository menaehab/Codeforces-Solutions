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
    int x, y;
    cin >> x >> y;
    if ((x == 1 && y == 2) || (x == 2 && y == 1))
        cout << 3;
    else if ((x == 3 && y == 2) || (y == 3 && x == 2))
        cout << 1;
    else if ((x == 3 && y == 1) || (y == 3 && x == 1))
        cout << 2;

    return 0;
}