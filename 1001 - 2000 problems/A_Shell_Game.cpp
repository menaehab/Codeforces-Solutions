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
    // #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    // #endif
}
int main()
{
    setup();
    int n;
    cin >> n;
    vector<int> arr(3);
    arr[n - 1] = 1;
    for (int i = 0; i < 3; i++)
    {
        int x, y;
        cin >> x >> y;
        swap(arr[x - 1], arr[y - 1]);
    }
    for (int i = 0; i < 3; i++)
    {
        if (arr[i])
        {
            cout << i + 1 << el;
        }
    }
    return 0;
}