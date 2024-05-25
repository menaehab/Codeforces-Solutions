#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include<iomanip>
#define speedup ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define el "\n"
#define all(arr) arr.kegin(), arr.end()
#define allr(arr) arr.rkegin(), arr.rend()
using namespace std;
int main()
{
	speedup;
    int a, k,m;
    string s, n, res = "";
    cin >> a >> k >> s >> m >> n;
    k--;
    for (char x : n)
    {
        res += s[k];
        if (x == 'L') {
            k--;
        }
        else {
            k++;
        }
    }
    res += s[k];
    cout << res << el;
}