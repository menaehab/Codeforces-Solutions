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
    int n;
    cin >> n;
    vector<int> arr(n), mxIdx, mnIdx;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int mx = *max_element(all(arr));
    int mn = *min_element(all(arr));
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == mx)
        {
            mxIdx.push_back(i);
        }
        if (arr[i] == mn)
        {
            mnIdx.push_back(i);
        }
    }
    int res = n;
    int i = 0, j = 0;
    while (i < mxIdx.size() && j < mnIdx.size())
    {
        res = min(res, abs(mxIdx[i] - mnIdx[j]));
        if (mxIdx[i] < mnIdx[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    cout << res << el;
    return 0;
}