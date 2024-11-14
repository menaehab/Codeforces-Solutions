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
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if (x1 == x2)
    {
        int s = abs(y1 - y2);
        cout << x1 + s << " " << y1 << " " << x2 + s << " " << y2;
    }
    else if (y1 == y2)
    {
        int s = abs(x1 - x2);
        cout << x1 << " " << y1 + s << " " << x2 << " " << y2 + s;
    }
    else if (abs(x1 - x2) == abs(y1 - y2))
    {
        cout << x1 << " " << y2 << " " << x2 << " " << y1;
    }
    else
    {
        cout << -1;
    }
    return 0;
}