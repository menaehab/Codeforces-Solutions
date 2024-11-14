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
    int n, m, x = INT_MAX, y = INT_MAX, xx = INT_MIN, yy = INT_MIN;
    cin >> n >> m;
    vector<vector<char>> arr(n, vector<char>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == '*')
            {
                x = min(x, i);
                y = min(y, j);
                xx = max(xx, i);
                yy = max(yy, j);
            }
        }
    }
    for (int i = x; i <= xx; i++)
    {
        for (int j = y; j <= yy; j++)
        {
            cout << arr[i][j];
        }
        cout << el;
    }
    return 0;
}