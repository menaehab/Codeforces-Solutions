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
    map<char, int> mp = {
        {'Q', 9},
        {'q', 9},
        {'R', 5},
        {'r', 5},
        {'B', 3},
        {'b', 3},
        {'N', 3},
        {'n', 3},
        {'P', 1},
        {'p', 1},
    };
    vector<string> arr(8);
    for (int i = 0; i < 8; i++)
    {
        cin >> arr[i];
    }
    int a = 0, b = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (arr[i][j] == 'Q' || arr[i][j] == 'R' || arr[i][j] == 'B' || arr[i][j] == 'N' || arr[i][j] == 'P')
            {
                a += mp[arr[i][j]];
            }
            if (arr[i][j] == 'q' || arr[i][j] == 'r' || arr[i][j] == 'b' || arr[i][j] == 'n' || arr[i][j] == 'p')
            {
                b += mp[arr[i][j]];
            }
        }
    }
    if (a > b)
        cout << "White";
    else if (a < b)
        cout << "Black";
    else
        cout << "Draw";
    return 0;
}