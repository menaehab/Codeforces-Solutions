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
int k;
bool comp(pair<string, int> a, pair<string, int> b)
{
    string s1 = a.first;
    string s2 = b.first;
    for (int i = 0; i < k; i++)
    {
        if (i & 1)
        {
            if (s1[i] != s2[i])
            {
                return s1[i] > s2[i];
            }
        }
        else
        {
            if (s1[i] != s2[i])
            {
                return s1[i] < s2[i];
            }
        }
    }
    return false;
}
int main()
{
    setup();
    int n;
    cin >> n >> k;
    vector<pair<string, int>> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first;
        arr[i].second = i;
    }
    sort(all(arr), comp);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].second + 1 << " ";
    }
    return 0;
}