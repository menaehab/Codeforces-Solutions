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
    int n, temp = 0, res = 0;
    cin >> n;
    vector<int> arr(n * 2 + 1), freq(n + 1);
    for (int i = 1; i <= n * 2; i++) 
    {
        cin >> arr[i];
    }
    for (int i = 1; i <= n * 2; i++) 
    {
        if (freq[arr[i]] == 0) 
        {
            temp++;
            freq[arr[i]] = 1;
        }
        else 
        {
            temp--;
            freq[arr[i]] = 0;
        }
        res = max(temp, res);
    }
    cout << res;
}