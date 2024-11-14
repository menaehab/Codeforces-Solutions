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
    bool flag = false;
    string res;
    for (int i = (s.size() / 2) + 1; i < s.size(); i++)
    {
        if (s.substr(0, i) == s.substr(s.size() - i, i))
        {
            {
                flag = true;
                res = s.substr(0, i);
                break;
            }
        }
    }
    if (flag)
        cout << "YES" << el << res;
    else
        cout << "NO";
    return 0;
}