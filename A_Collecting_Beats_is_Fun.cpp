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
    int k;
    cin >> k;
    k *= 2;
    vector<int> cnt(9);
    for (int i = 0; i < 4; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < 4; j++)
        {
            if (s[j] != '.')
            {
                cnt[s[j] - '1']++;
            }
        }
    }
    for (int i = 0; i < 9; i++)
    {
        if (cnt[i] > k)
        {
            cout << "NO" << el;
            return 0;
        }
    }
    cout << "YES" << el;
    return 0;
}