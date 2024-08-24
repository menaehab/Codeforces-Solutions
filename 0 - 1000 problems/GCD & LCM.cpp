#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    long long x, y;
    cin >> x >> y;
    long long gcd = __gcd(x, y);
    cout << gcd << " ";
    long long Lcm = (x * y) / gcd;
    cout << Lcm;
}