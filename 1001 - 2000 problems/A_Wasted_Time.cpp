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
    int n, k;
    cin >> n >> k;
    vector<pair<double, double>> arr(n);
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first >> arr[i].second;
        if (i != 0)
            sum += sqrt(pow(arr[i].first - arr[i - 1].first, 2) + pow(arr[i].second - arr[i - 1].second, 2));
    }
    cout.precision(9);
    cout << fixed << sum / 50 * k;
    return 0;
}