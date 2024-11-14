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
    int n, cnt = 0;
    cin >> n;
    vector<int> arr(n), res;
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1) 
        {
            if (cnt > 0) 
            {
                res.push_back(cnt);
            }
            cnt = 1;
        }
        else 
        {
            cnt++;
        }
    }
    res.push_back(cnt);
    cout << res.size() << el;
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
}