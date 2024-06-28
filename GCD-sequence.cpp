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
int gcd(int a, int b) 
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
int main()
{
	speedup;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), a1, a2, a3, b1(n - 2), b2(n - 2), b3(n - 2);
        bool flag1 = true, flag2 = true, flag3 = true;
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
        }
        vector<int> b(n - 1);
        for (int i = 0; i < n - 1; i++) 
        {
            b[i] = gcd(a[i], a[i + 1]);
        }
        int index = -1;
        for (int i = 0; i < n - 2; i++)
        {
            if (b[i] > b[i + 1])
            {
                index = i;
                break;
            }
        }
        if (index == -1)
        {
            cout << "YES" << el;
            continue;
        }
        for (int i = 0; i < n; i++) 
        {
            if (i != index + 1)
            {
                a1.push_back(a[i]);
            }
            if (i != index + 2)
            {
                a2.push_back(a[i]);
            }
            if (i != index)
            {
                a3.push_back(a[i]);
            }
        }
        for (int i = 0; i < n - 2; i++) 
        {
            b1[i] = gcd(a1[i], a1[i + 1]);
            b2[i] = gcd(a2[i], a2[i + 1]);
            b3[i] = gcd(a3[i], a3[i + 1]);
        }
        for (int i = 0; i < n - 3; i++) 
        {
            if (b1[i] > b1[i + 1])
            {
                flag1 = false;
            }
            if (b2[i] > b2[i + 1])
            {
                flag2 = false;
            }
            if (b3[i] > b3[i + 1])
            {
                flag3 = false;
            }
        }
        if (!(flag1 || flag2 || flag3)) 
        {
            cout << "NO" << el;
        }
        else {
            cout << "YES" << el;
        }
    }
}