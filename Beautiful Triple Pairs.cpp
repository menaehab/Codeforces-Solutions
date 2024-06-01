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
        ll res = 0;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        map<pair<int, int>, int> ab, bc, ac;
        map<tuple<int, int, int>, int> ab3, bc3, ac3;
        for (int i = 0; i < n - 2; i++) {
            int a = arr[i];
            int b = arr[i + 1];
            int c = arr[i + 2];
            ab[{a, b}]++;
            bc[{b, c}]++;
            ac[{a, c}]++;
            tuple<int, int, int> triple = make_tuple(a, b, c);
            ab3[triple]++;
            bc3[triple]++;
            ac3[triple]++;
            res += ab[{a, b}] - ab3[triple];
            res += bc[{b, c}] - bc3[triple];
            res += ac[{a, c}] - ac3[triple];
        }
        cout << res << el;
	}
}