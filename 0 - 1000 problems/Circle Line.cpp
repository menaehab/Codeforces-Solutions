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
    int n, x, s, t,res;
    vector<int>arr(102);
    cin >> n;
    for (int i = 2; i < n + 2; ++i)
    {
        cin >> x;
        arr[i] = arr[i - 1] + x;
    }
    cin >> s >> t;
    if (s > t)
    {
        swap(s, t);
    }
    res = arr[t] - arr[s];
    cout << min(res, (arr[n + 1] - res));
}