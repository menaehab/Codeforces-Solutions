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
    cin >> s;
    map<char, ll> mp;
    for (char i = 'a'; i <= 'z'; i++)
    {
        ll k;
        cin >> k;
        mp[i] = k;
    }
    ll res = 0;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '?')
        {
            int cnt = 0;
            while (i + cnt < n && s[i + cnt] == '?')
            {
                cnt++;
            }
            if (i == 0 && i + cnt == n)
            {
                cout << 0 << el;
                for (int j = 0; j < n; j++)
                {
                    cout << 'a';
                }
                return 0;
            }
            else if (i == 0)
            {
                int mn = INT_MAX, idx;
                for (int z = 0; z < 26; z++)
                {
                    int c = abs(mp[s[cnt]] - mp['a' + z]);
                    if (mn > c)
                    {
                        mn = c;
                        idx = z;
                    }
                }
                char re = 'a' + idx;
                for (int j = 0; j < cnt; j++)
                {
                    s[j] = re;
                }
                i += cnt - 1;
            }
            else if (i + cnt == n)
            {
                int mn = INT_MAX, idx;
                for (int z = 0; z < 26; z++)
                {
                    int c = abs(mp[s[i - 1]] - mp['a' + z]);
                    if (mn > c)
                    {
                        mn = c;
                        idx = z;
                    }
                }
                char re = 'a' + idx;
                for (int j = i; j < n; j++)
                {
                    s[j] = re;
                }
                break;
            }
            else
            {
                int mn = INT_MAX, idx;
                for (int x = 0; x < 26; x++)
                {
                    int c = abs(mp[s[i - 1]] - mp['a' + x]) + abs(mp['a' + x] - mp[s[i + cnt]]);
                    if (mn > c)
                    {
                        mn = c;
                        idx = x;
                    }
                }
                char re = 'a' + idx;
                for (int j = i; j < i + cnt; j++)
                {
                    s[j] = re;
                }
                i += cnt - 1;
            }
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        res += abs(mp[s[i]] - mp[s[i + 1]]);
    }
    cout << res << el << s << el;
    return 0;
}