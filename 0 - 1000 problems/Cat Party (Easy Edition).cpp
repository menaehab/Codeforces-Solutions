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
    int n, k, mx = 0, res = 0;
    cin >> n;
    vector<int> arr(n + 1);
    map<int, int> freq, cnt;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++)
    {
        k = arr[i];
        if (freq[k] > 0)
        {
            cnt[freq[k]]--;
            if (cnt[freq[k]] == 0)
            {
                cnt.erase(freq[k]);
            }
        }
        freq[k]++;
        mx = max(mx, freq[k]);
        cnt[freq[k]]++;
        if (cnt[1] == i || (cnt[mx] * mx == i - 1 && cnt[1] == 1) || (cnt[mx] * mx == i - mx) || (cnt[mx - 1] * (mx - 1) == i - mx && cnt[mx] == 1))
        {
            res = i;
        }
    }
    cout << res;
}