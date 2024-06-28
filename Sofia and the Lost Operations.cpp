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
        int n, k;
        cin >> n;
        vector<int> arr1(n), arr2(n);
        map<int, int> mp, cnt;
        bool flag = false;  
        for (int i = 0; i < n; i++) 
        {
            cin >> arr1[i];
        }
        for (int i = 0; i < n; i++) 
        {
            cin >> arr2[i];
        }
        cin >> k;
        for (int i = 0; i < k; i++) 
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        for (int i = 0; i < n; i++) 
        {
            if (arr1[i] != arr2[i]) 
            {
                cnt[arr2[i]]++;
            }
        }
        for (auto i : cnt)
        {
            if (mp[i.first] < i.second)
            {
                flag = true;  
                break;
            }
        }
        if (flag) {
            cout << "NO" << el;  
        }
        else {
            cout << "YES" << el;  
        }
    }
}