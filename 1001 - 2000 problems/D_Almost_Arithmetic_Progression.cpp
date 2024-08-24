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
    int n, res = 0;
    cin >> n;
    vector<int> arr(n), diff(n - 1);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (n == 2 || n == 1)
    {
        cout << 0;
        return 0;
    }
    for (int i = 0; i < n - 1; i++)
    {
        diff[i] = abs(arr[i] - arr[i + 1]);
    }
    if (*max_element(all(diff)) - *min_element(all(diff)) > 4 || (!is_sorted(all(arr), greater<int>()) && !is_sorted(all(arr))))
    {
        cout << -1;
        return 0;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (diff[i] > diff[i] + 1)
        {
            arr[i]--;
            arr[i + 1]++;
            res++;
        }
        else
        {
            arr[i + 1]--;
            arr[i]++;
            res++;
        }
    }
    cout << res;
    return 0;
}