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
int ask(int x, int y)
{
    cout << "? " << x << " " << y << el;
    cout.flush();
    int a;
    cin >> a;
    return a;
}
int main()
{
    setup();
    int n;
    cin >> n;
    int x = ask(1, 2);
    int y = ask(1, 3);
    int z = ask(2, 3);
    int a = (x + y - z) / 2;
    vector<int> arr(n);
    arr[0] = a;
    arr[1] = x - a;
    arr[2] = y - a;
    for (int i = 3; i < n; i++)
    {
        arr[i] = ask(1, i + 1) - a;
    }
    cout << "! ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}