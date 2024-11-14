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
    int n; 
    cin >> n;
    string res = "";
    if (n == 1) {
        res = "yoink a\nyoink b\n*slaps a on top of b*\nyeet b\ngo touch some grass\n";
    }
    else if (n == 2) {
        res = "yoink a\nbruh b is lowkey just 0\nrip this b fell off by a\nvibe check a ratios b\nsimp for 7\nbruh a is lowkey just b\nyeet a\ngo touch some grass\n";
    }
    else if (n == 3) {
        res = "yoink n\nyoink a\nbruh m is lowkey just a[0]\nbruh i is lowkey just 1\nvibe check n ratios i\nsimp for 9\nyeet m\ngo touch some grass\nvibe check a[i] ratios m\nbruh m is lowkey just a[i]\n*slaps 1 on top of i*\nsimp for 5\n";
    }
    else if (n == 4) {
        res = "yoink n\nyoink a\nyoink k\nbruh i is lowkey just 0\nvibe check n ratios i\nsimp for 10\n*slaps -1 on top of k*\nyeet a[k]\ngo touch some grass\nbruh j is lowkey just 0\nvibe check n ratios j\nsimp for 15\n*slaps 1 on top of i*\nsimp for 5\nvibe check a[i] ratios a[j]\nsimp for 19\n*slaps 1 on top of j*\nsimp for 11\nbruh l is lowkey just a[i]\nbruh a[i] is lowkey just a[j]\nbruh a[j] is lowkey just l\nsimp for 17\n";
    }
    cout << res;
}