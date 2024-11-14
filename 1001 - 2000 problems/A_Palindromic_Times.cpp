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
bool isPalindrome(int hh, int mm)
{
    string h = (hh < 10 ? "0" : "") + to_string(hh);
    string m = (mm < 10 ? "0" : "") + to_string(mm);
    return h[0] == m[1] && h[1] == m[0];
}
int main()
{
    setup();
    string s;
    cin >> s;
    int hh = stoi(s.substr(0, 2));
    int mm = stoi(s.substr(3, 2));
    while (true)
    {
        mm++;
        if (mm == 60)
        {
            mm = 0;
            hh++;
        }
        if (hh == 24)
        {
            hh = 0;
        }
        if (isPalindrome(hh, mm))
        {
            cout << setw(2) << setfill('0') << hh << ":"
                 << setw(2) << setfill('0') << mm;
            break;
        }
    }
    return 0;
}