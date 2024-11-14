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
    int n, j = 0;
    string x;
    cin >> n >> x;

    if (n > x.size()) 
    {
        cout << "NO";
        return 0;
    }
    vector<string> arr;
    vector<int> freq(26, 0);
    string res;
    int cnt = 0;
    while (j < x.size() && cnt < n) 
    {
        if (freq[x[j] - 'a'] == 0) 
        {
            if (!res.empty())
            {
                arr.push_back(res);
                res.clear();
            }
            freq[x[j] - 'a'] = 1;
            cnt++;
        }
        res += x[j];
        j++;
    }
    res += x.substr(j);
    arr.push_back(res);
    if (arr.size() == n) 
    {
        cout << "YES" << el;
        for (auto i : arr) 
        {
            cout << i << el;
        }
    }
    else 
    {
        cout << "NO";
    }
}