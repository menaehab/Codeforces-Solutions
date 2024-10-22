#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n; cin >> n;
    long long row = n / 4;
    int column = 0;
    long long m = n - 1;
    if (row % 2 == 1) {
        if (n % 2 == 0) {
            if (n % 4 == 0) {
                column = 3;
            }
            else {
                column = 1;
            }
        }
        else {
            if (m % 4 == 0) {
                column = 2;
            }
            else {
                column = 0;
            }

        }
    }
    else {
        if (n % 2 == 0) {
            if (n % 4 == 0) {
                column = 0;
            }
            else {
                column = 2;
            }
        }
        else {
            if (m % 4 == 0) {
                column = 1;
            }
            else {
                column = 3;
            }
        }
    }
    cout << row << " " << column;
}