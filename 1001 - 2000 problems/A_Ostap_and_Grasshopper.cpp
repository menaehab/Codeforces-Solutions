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
    int n, k;
    string s;
    cin >> n >> k >> s;
    int g = s.find("G");
    int t = s.find("T");
    bool flag = false;
    for (int i = min(g, t); i < n; i += k)
    {
        if (s[i] == '#')
        {
            break;
        }
        if (s[min(g, t)] == 'G')
        {
            if (s[i] == 'T')
            {
                flag = true;
                break;
            }
        }
        if (s[min(g, t)] == 'T')
        {
            if (s[i] == 'G')
            {
                flag = true;
                break;
            }
        }
    }
    if (flag)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}