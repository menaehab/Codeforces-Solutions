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
        ll n;
        cin >> n;
        if (n * n - 4 * n < 0)
        {
            cout << "N" << el;
        }
        else
        {
            double x = n * n - 4 * n;
            double a = (n - sqrt(x)) / 2.0L;
            double b = n - a;
            cout.precision(10);
            cout << fixed << "Y " << a << " " << b << el;
        }
    }
    return 0;
}