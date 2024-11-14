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
#define speedup ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define el "\n"
#define all(arr) arr.begin(), arr.end()
#define allr(arr) arr.rbegin(), arr.rend()
#define in freopen("input.in", "r", stdin);
#define out freopen("output.out", "w", stdout);
#define pi 3.141592653589793230
using namespace std;
int main() {
    string s;
    int n;
    cin >> n >> s;
    int x=0,y=0,ans=0;
    for(auto c:s) {
        x+=c=='x';
        y+=c=='X';
    }
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='x'&&x>y) {
            s[i]='X';
            x--;
            y++;
            ans++;
        }
        if(s[i]=='X'&&x<y) {
            s[i] = 'x';
            x++;
            y--;
            ans++;
        }
    }
    cout << ans << el << s;
    return 0;
}
