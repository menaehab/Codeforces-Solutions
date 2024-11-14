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
    string s;
    bool flag1 = 0;
    while (getline(cin, s))
    {
        bool flag2 = false;
        if (s.size() == 0 || s == " ")
        {
            continue;
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '/' && s[i + 1] == '/' && !flag1)
            {
                break;
            }
            else if (s[i] == '/' && s[i + 1] == '*')
            {
                i++;
                flag1 = true;
            }
            else if (s[i] == '*' && s[i + 1] == '/' && flag1)
            {
                i++;
                flag1 = false;
            }
            else if (!flag1)
            {
                cout << s[i];
                flag2 = true;
            }
        }
        if (flag2 && !flag1)
        {
            cout << el;
        }
    }
    return 0;
}