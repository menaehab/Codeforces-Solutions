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
    int t, x;
    priority_queue<int> qe;
    vector<pair<string, int>> arr;
    string s;
    cin >> t;
    while(t--)
    {
        cin >> s;
        if (s == "insert")
        {
            cin >> x; qe.push(-x);
            arr.push_back(make_pair(s, x));
        }
        else if (s == "getMin")
        {
            cin >> x;
            if (!qe.empty())
            {
                while (qe.size() != 0 && -qe.top() < x)
                {
                    qe.pop(); arr.push_back(make_pair("removeMin", -1));
                }
                if (qe.size() == 0 || -qe.top() > x)
                {
                    qe.push(-x); arr.push_back(make_pair("insert", x));
                }
                arr.push_back(make_pair("getMin", x));
            }
            else
            {
                qe.push(-x); arr.push_back(make_pair("insert", x));
                arr.push_back(make_pair("getMin", x));
            }
        }
        else
        {
            if (qe.size() == 0)
            {
                arr.push_back(make_pair("insert", 0));
            }
            else
            {
                qe.pop();
            }
            arr.push_back(make_pair(s, -1));
        }
    }
    cout << arr.size() << el;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i].first == "removeMin")
        {
            cout << arr[i].first << el;
        }
        else
        {
            cout << arr[i].first << " " << arr[i].second << el;
        }
    }
}