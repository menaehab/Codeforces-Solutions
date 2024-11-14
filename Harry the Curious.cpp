#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    bool flag = false;
    for (int i = x; i <= y; i++) {
        bool prime = true;
        if (z % i == 0) {
            for (int j = 2; j <= sqrt(i); j++) {
                if (i % j == 0) {
                    prime = false;
                    break;
                }
            }
            if (prime && i != 1) {
                cout << i << " ";
                flag = true;
            }
        }
    }
    if (!flag) {
        cout << -1;
    }
}
