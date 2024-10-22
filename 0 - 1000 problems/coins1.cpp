#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include<iomanip>
#include <string>
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
    map<char, int> mp;
    mp.insert(pair<char, int>('A', 0));
    mp.insert(pair<char, int>('B', 0));
    mp.insert(pair<char, int>('C', 0));
    string s;
    cin >> s;
    if (s[1] == '>')
    {
        mp[s[0]]++;
    }
    else
    {
        mp[s[2]]++;
    }
    cin >> s;
    if (s[1] == '>')
    {
        mp[s[0]]++;
    }
    else
    {
        mp[s[2]]++;
    }
    cin >> s;
    if (s[1] == '>')
    {
        mp[s[0]]++;
    }
    else
    {
        mp[s[2]]++;
    }

    if (mp['A'] == 1 && mp['B'] == 1 && mp['C'] == 1)
    {
        cout << "Impossible";
    }
    else
    {
        if (mp['A'] == 0)
        {
            cout << "A";
        }
        else if (mp['B'] == 0)
        {
            cout << "B";
        }
        else if (mp['C'] == 0)
        {
            cout << "C";
        }
        if (mp['A'] == 1)
        {
            cout << "A";
        }
        else if (mp['B'] == 1)
        {
            cout << "B";
        }
        else if (mp['C'] == 1)
        {
            cout << "C";
        }

        if (mp['A'] == 2)
        {
            cout << "A";
        }
        else if (mp['B'] == 2)
        {
            cout << "B";
        }
        else if (mp['C'] == 2)
        {
            cout << "C";
        }
    }
}