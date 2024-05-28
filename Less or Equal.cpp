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
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sort(all(arr));
    if (k == 0) {
        if (arr[0] == 1) 
        {
            cout << -1;
        }
        else 
        {
            cout << 1;
        }
    }
    else if (k == n)
    {
        cout << arr[n - 1];
    }
    else if (arr[k - 1] == arr[k])
    {
        cout << -1;
    }
    else 
    {
        cout << arr[k - 1];
    }
}