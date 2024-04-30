#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        int flag = abs(x - y);
        if (flag == 0) {
            cout << "0\n";
            continue;
        }
        if (x < y) {
            if ((y - x) % 2 == 0) {
                cout << "2\n";
            }
            else {
                cout << "1\n";
            }
        }
        else {
            if ((x - y) % 2 == 0) {
                cout << "1\n";
            }
            else {
                cout << "2\n";
            }
        }
    }
}
