#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <iomanip>
#include <string>
#include <set>
#include <queue>
#include <unordered_map>
#include <unordered_set>
#define ll long long
#define el '\n'
#define all(arr) arr.begin(), arr.end()
#define allr(arr) arr.rbegin(), arr.rend()
#define pi 3.14159265358979323846
using namespace std;
void setup()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
int main()
{
    setup();
    string x;
    cin >> x;
    string arr[1000];
    int cnt = 0;
    int n = x.size();
    int l = 0, r = 0;
    string res = "";
    for (int i = 0; i < n; i++)
    {
        if (x[i] == 'L')
        {
            l++;
        }
        else
        {
            r++;
        }
        res.push_back(x[i]);
        if (l == r)
        {
            arr[cnt] = res;
            res = "";
            cnt++;
            l = 0, r = 0;
        }
    }
    cout << cnt << el;
    for (int i = 0; i < cnt; i++)
    {
        cout << arr[i] << el;
    }
    return 0;
}