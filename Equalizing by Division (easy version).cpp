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
    int n, k,res = 0;
    cin >> n >> k;
    vector<vector<int>>arr(n);
    for (int i = 0; i < n; i++)
    {
        int x,tmp = 0;
        cin >> x;
        while (x && k >= tmp)
        {
            x /= 2;
            tmp++;
            arr[i].push_back(tmp);
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (k == arr[i].size())
        {
            res++;
        }
    }
    cout << res;
    /*vector<int> arr(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }
    map<int, vector<int>> mp;
    for (int i : arr) {
        int x = i;
        int tmp = 0;
        while (x > 0) {
            mp[x].push_back(tmp);
            x /= 2;
            tmp++;
        }
        mp[0].push_back(tmp);
    }
    int res = INT_MAX;
    for (auto& pair : mp)
    {
        vector<int>& ops = pair.second;
        if (ops.size() >= k)
        {
            sort(ops.begin(), ops.end());
            int crnt = 0;
            for (int i = 0; i < k; i++) 
            {
                crnt += ops[i];
            }
            res = min(res, crnt);
        }
    }
    cout << res << endl;*/
}