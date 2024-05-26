#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include<iomanip>
#include <string>
#define speedup ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define el "\n"
#define all(arr) arr.begin(), arr.end()
#define allr(arr) arr.rbegin(), arr.rend()
#define in freopen("input.in", "r", stdin);
#define out freopen("output.out", "w", stdout);
using namespace std;
int main()
{
    speedup;
    int n, k, x;
    ll res = 0;
    cin >> n >> k;
    vector<int> arr(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] %= k;
        x = k - arr[i];
        x %= k;
        if (mp[x] > 0)
        {
            res++;
            mp[x]--;
        }
        else
        {
            mp[arr[i]]++;
        }
    }
    cout << res * 2;
}