#include<iostream>
using namespace std;
bool prime(int n) {
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
            break;
        }
    }
    return 1;
}
int main() {
    int x, y;
    cin >> x >> y;
    int n = x + 1;
    int l = 1;
    while (l == 1) {
        int A = prime(n);
        if (A == 1) {
            l = 0;
        }
        else {
            n++;
        }
    }
    if (n == y) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}