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
const int Md = 1000000007;
int main()
{
	speedup;
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) 
    {
        cin >> a[i];
    }
    if (n == 1)
    {
        cout << ((a[1] == 0) ? 2 : 0);
        return 0;
    }
    vector<vector<int>> dp(n, vector<int>(4, 0));
    for (int i = 0; i < 4; i++) 
    {
        dp[1][i] = (a[1] == i % 2);
    }
    for (int i = 2; i < n; i++) 
    {
        for (int j = 0; j < 4; j++) 
        {
            for (int k : {0, 1})
            {
                if (j / 2 + k == a[i]) 
                {
                    dp[i][(j & 1) * 2 + k] = (dp[i][(j & 1) * 2 + k] + dp[i - 1][j]) % Md;
                }
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < 4; i++) 
    {
        if (a[n] == i / 2) 
        {
            ans = (ans + dp[n - 1][i]) % Md;
        }
    }
    cout << ans;
}