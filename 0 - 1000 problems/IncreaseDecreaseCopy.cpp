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
    while (t--) {
        int n, res = 0, mx = 0, temp = INT_MAX, d = INT_MAX, index = 0;
        cin >> n;
        vector<int>arr(n + 1), cpy(n + 1);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mx = max(mx, arr[i]);
        }
        for (int i = 0; i < n + 1; i++)
        {
            cin >> cpy[i];
        }
        for (int i = 0; i < arr.size(); i++)
        {
            temp = min(temp, abs(cpy[n] - arr[i]));
            if (temp != d)
            {
                d = temp;
                index = arr[i];
            }
        }
        arr[n] = index;
        res++;
        for (int i = 0; i <= n; i++)
        {
            res += abs(arr[i] - cpy[i]);
        }
        cout << res << el;
    }
}