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
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, k, fav, cnt1 = 0, cnt2 = 0;
        cin >> n >> x >> k;
        vector<int>arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        fav = arr[x - 1];
        sort(allr(arr));
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > fav) 
            {
                cnt1++;
            }
            else if (arr[i] == fav) 
            {
                cnt2++;
            }
        }
        if (cnt1 >= k)
        {
            cout << "NO" << el;
        }
        else if (cnt1 + cnt2 <= k) 
        {
            cout << "YES" << el;
        }
        else {
            cout << "MAYBE" << el;
        }
    }
}