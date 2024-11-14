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
    map<char, string> mp1 = {
        {'1', "one"},
        {'3', "three"},
        {'2', "two"},
        {'4', "four"},
        {'5', "five"},
        {'6', "six"},
        {'7', "seven"},
        {'8', "eight"},
        {'9', "nine"}};
    map<string, string> mp2 = {
        {"10", "ten"},
        {"11", "eleven"},
        {"12", "twelve"},
        {"13", "thirteen"},
        {"14", "fourteen"},
        {"15", "fifteen"},
        {"16", "sixteen"},
        {"17", "seventeen"},
        {"18", "eighteen"},
        {"19", "nineteen"},
    };
    map<char, string> mp3 = {
        {'2', "twenty"},
        {'3', "thirty"},
        {'4', "forty"},
        {'5', "fifty"},
        {'6', "sixty"},
        {'7', "seventy"},
        {'8', "eighty"},
        {'9', "ninety"},
    };
    string s;
    cin >> s;
    if (s == "0")
        cout << "zero";
    else if (s.size() == 1)
        cout << mp1[s[0]];
    else if (s.size() == 2 && mp2.find(s) != mp2.end())
        cout << mp2[s];
    else
    {
        cout << mp3[s[0]];
        if (s[1] != '0')
            cout << "-" << mp1[s[1]];
    }
    return 0;
}