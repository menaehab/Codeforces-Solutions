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
struct laptop
{
    int speed, ram, hdd, cost;
};

int main()
{
    setup();
    int n;
    cin >> n;
    vector<laptop> arr(n);
    vector<bool> flag(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].speed >> arr[i].ram >> arr[i].hdd >> arr[i].cost;
    }
    int res = -1, mn = 1001;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j && arr[i].speed < arr[j].speed && arr[i].ram < arr[j].ram && arr[i].hdd < arr[j].hdd)
            {
                flag[i] = true;
                break;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (!flag[i] && arr[i].cost < mn)
        {
            mn = arr[i].cost;
            res = i + 1;
        }
    }
    cout << res;
    return 0;
}