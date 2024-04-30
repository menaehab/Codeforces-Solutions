#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, c, min = 0, ctr = 0, group = 0;
    cin >> n >> c;
    while (n--)
    {
        ctr++;
        int a;
        cin >> a;
        if (ctr == (group * c) + 1)
            min = a;
        if (a < min)
            min = a;
        if (ctr % c == 0 || n == 0)
        {
            cout << min << " ";
            group++;
        }
    }
}