#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x, y, res, count = 0;
    cin >> x >> y;
    for (int i = x; i <= y; i++) {
        int temp = 0;
        for (int j = 1; j <= sqrt(i); j++) {
            if (i % j == 0) {
                if (i / j == j)
                    temp++;
                else
                    temp += 2;
            }
        }
        if (temp > count) {
            count = temp;
            res = i;
        }
    }
    cout << res;
}
