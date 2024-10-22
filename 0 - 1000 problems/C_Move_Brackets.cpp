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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        stack<char> stk;
        for (int i = 0; i < n; i++)
        {
            if (stk.empty())
                stk.push(s[i]);
            else
            {
                if (s[i] == '(')
                    stk.push(s[i]);
                if (s[i] == ')')
                {
                    if (stk.top() == '(')
                        stk.pop();
                    else
                        stk.push(s[i]);
                }
            }
        }
        cout << stk.size() / 2 << el;
    }
    return 0;
}