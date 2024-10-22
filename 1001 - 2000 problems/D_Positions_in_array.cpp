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
    int n;
    cin >> n;
    vector<int> arr(n), res, idx;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] <= 10)
            res.push_back(arr[i]), idx.push_back(i);
    }
    for (int i = 0; i < res.size(); i++)
    {
        cout << "A[" << idx[i] << "] = " << res[i] << el;
    }

    return 0;
}