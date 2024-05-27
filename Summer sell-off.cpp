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
    ll n, k, res = 0;
    cin >> n >> k;
    vector<pair<int, int>> arr(n);
    vector<int> index(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i].first >> arr[i].second;
        res += min(arr[i].first, arr[i].second);
        if (arr[i].second > arr[i].first) {
            index[i] = min(2 * arr[i].first, arr[i].second) - min(arr[i].first, arr[i].second);
        }
        else 
        {
            index[i] = 0;
        }
    }
    sort(allr(index));
    int j = 0;
    while (j < k) 
    { 
        if (index[j] != 0) {
            res += index[j];
        }
        j++;
    }
    cout << res;
}