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
    vector<string> v(21);
    for (auto& e : v)
    { 
        cin >> e;
    }
    int ans = 0;
    for (int i = 0; i < 18; i++)
    {
        for (int j = 0; j < 18; j++)
        {
            int cnt = 0;
            for (int k = 0; k < 4; k++)
            {
                for (int l = 0; l < 4; l++) {
                    cnt += v[i + l][j + k] - '0';
                }
            }
            ans = max(ans, cnt);
        }
    }
    cout << ans;
}