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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int res = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'V')
        {
            res += 5;
        }
        else if (s[i] == 'W')
        {
            res += 2;
        }
        else if (s[i] == 'X')
        {
            i++;
        }
        else if (s[i] == 'Y' && i + 1 < s.size())
        {
            s.push_back(s[i + 1]);
            i++;
        }
        else if (s[i] == 'Z' && i + 1 < s.size())
        {
            if (s[i + 1] == 'V')
            {
                res /= 5;
                i++;
            }
            else if (s[i + 1] == 'W')
            {
                res /= 2;
                i++;
            }
        }
    }
    cout << res << el;
    return 0;
}