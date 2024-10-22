#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    while (n--) {
        string x;
        cin >> x;
        string x1,x2;
        int max = 0, min = 0;
        x1 += x[0];
        int j = 0;
        for (int i = 1; i < x.size(); i++) {
            if (x[i] == '0') {
                x1 += x[i];
            }
            else {
                j = i;
                break;
            }
        }
        for (int k = j; k < x.size(); k++) {
            x2 += x[k];
        }
          int a = stoi(x1);
          int b = stoi(x2);
          max = a;
          min = b;
        if (a >= b) {
            cout << -1 << endl;
        }
        else {
            cout << x1 << " " << x2 << endl;
        }
    }
}