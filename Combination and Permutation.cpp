#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    long long b = 1, a = 1,c,d,res1,res2;
    for (int i = 1; i <= x; i++) {
        a *= i;

        if (i <= y) {
            b *= i;
        }
    }
    c = b;
    d = 1;
    for (int i = 2; i <= (x - y); i++) {
        c *= i;
        d *= i;
    }
    res1 = a / c;
    res2 = a / d;
    cout << res1 << " " << res2;
}
