#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double x1, y1, r, x2, y2;
    cin >> x1 >> y1 >> r >> x2 >> y2;
    double sum = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    if (sum < r || abs(sum - r) < 1e-9) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}