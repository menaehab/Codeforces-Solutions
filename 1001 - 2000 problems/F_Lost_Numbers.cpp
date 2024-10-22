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
    int ret;
    cin >> ret;
    return ret;
}
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main()
{
    setup();
    int a = ask(1, 2);
    int b = ask(1, 3);
    int c = ask(1, 4);
    int d = ask(1, 5);
    int arr[] = {4, 8, 15, 16, 23, 42};
    do
    {
        if (arr[0] * arr[1] == a && arr[0] * arr[2] == b && arr[0] * arr[3] == c && arr[0] * arr[4] == d)
        {
            cout << "! ";
            for (auto &it : arr)
                cout << it << ' ';
            break;
        }
    } while (next_permutation(arr, arr + 6));
    return 0;
}