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
    vector<bool> arr(n + 1, true);
    arr[0] = arr[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (arr[i]) 
        {
            for (int j = i * i; j <= n; j += i) 
            {
                arr[j] = false;
            }
        }
    }
    vector<int> I_HATE_THIS_PROBLEM;
    for (int i = 2; i <= n; i++) {
        if (arr[i]) {
            I_HATE_THIS_PROBLEM.push_back(i);
        }
    }
    int cnt = 0;
    for (size_t i = 1; i < I_HATE_THIS_PROBLEM.size(); i++)
    {
        int p = I_HATE_THIS_PROBLEM[i - 1] + I_HATE_THIS_PROBLEM[i] + 1;
        if (p <= n && arr[p]) 
        {
            cnt++;
        }
    }
    if (cnt >= k) 
    {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}