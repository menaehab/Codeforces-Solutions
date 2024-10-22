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
    ll n, sum = 0, cnt = 0;
    cin >> n;
    vector<int> arr(n), freq(10000005), res(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
        sum += arr[i];
        freq[arr[i]]++;
    }
    for (int i = 0; i < n; i++) {
        freq[arr[i]]--;
        if ((sum - arr[i]) % 2 == 0 && (sum - arr[i]) / 2 <= 1000000 && freq[(sum - arr[i]) / 2] > 0) 
        {
            res[cnt] = i + 1;
            cnt++;
        }
        freq[arr[i]]++;
    }
    cout << cnt << el;
    for (int i = 0; i < cnt; i++) 
    {
        cout << res[i] << " ";
    }
}