#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include<iomanip>
#include <string>
#include <set>
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
    int n, m;
    char c;
    cin >> n >> m >> c;
    vector<vector<char>> arr(n, vector<char>(m)), sum(n, vector<char>(m));
    vector<int> x{ -1, 0, 1, 0 }, y{ 0, 1, 0, -1 };
    set<char> res;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            if (arr[i][j] == c) {
                for (int k = 0; k < 4; k++) 
                {
                    int X = i + x[k];
                    int Y = j + y[k];
                    if (X >= 0 && X < n && Y >= 0 && Y < m)
                    {
                        if (arr[X][Y] != c && arr[X][Y] != '.')
                        {
                            res.insert(arr[X][Y]);
                        }
                    }
                }
            }
        }
    }
    cout << res.size();
}