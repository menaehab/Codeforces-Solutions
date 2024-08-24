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
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
        vector<int> arr;
        while (n > 0) 
        {
            if (n % 2 == 0) 
            {
                arr.push_back(0);
            }
            else
            {
                if ((n - 1) / 2 % 2 == 0)
                {
                    arr.push_back(1);
                    n -= 1;
                }
                else 
                {
                    arr.push_back(-1);
                    n += 1;
                }
            }
            n /= 2;
        }
        cout << arr.size() << el;
        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i] << " ";
        }
        cout << el;
	}
}