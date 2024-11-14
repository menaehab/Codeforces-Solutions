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
    int n, k;
    cin >> n >> k;
    vector<int> arr[40];
    vector<bool> flag(40 * 40);
    for (int i = 1; i <= k; i++)
    {
        int x;
        cin >> x;
        flag[x] = true;
        arr[i].push_back(x);
    }
    int p = 1;
    for (int i = 1; i <= k; i++)
    {
        for (int j = 1; j < n; j++)
        {
            while (flag[p])
                p++;
            arr[i].push_back(p);
            flag[p] = true;
        }
    }
    for (int i = 1; i <= k; i++)
    {
        for (int x : arr[i])
            cout << x << " ";
        cout << el;
    }

    return 0;
}