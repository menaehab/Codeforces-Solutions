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
    int n, t, cnt = 0;
    cin >> t >> n;
    vector<vector<int>> arr(t, vector<int>(n * 2));
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n * 2; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n * 2; j += 2)
        {
            if (arr[i][j] == 1 || arr[i][j + 1] == 1)
                cnt++;
        }
    }
    cout << cnt;
    return 0;
}