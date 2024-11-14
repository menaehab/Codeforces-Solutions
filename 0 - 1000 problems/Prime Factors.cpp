#include <iostream>
using namespace std;
int main() {
    int x;
    cin >> x;
    for (int i = 2; i <= x; i++) {
        int count = 0;
        while (x % i == 0) {
            count++;
            x /= i;
        }
        if (count > 0) {
            cout << "(" << i << "^" << count << ")";
            if (x > 1) {
                cout << "*";
            }
        }
    }
}
