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
bool lucky(string x)
{
    for (int i = 0; i < x.size(); i++)
        if (x[i] != '4' && x[i] != '7')
            return false;
    return true;
}
int main()
{
    setup();
    int n, k;
    cin >> n >> k;
    vector<string> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < arr[i].size(); j++)
        {
            if (arr[i][j] == '4' || arr[i][j] == '7')
                cnt++;
        }
        if (cnt <= k)
            res++;
    }
    cout << res;
    return 0;
}