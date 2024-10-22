#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double L, R;
    cin >> L >> R;
    double radius = min(L, R) / 2.00;
    double area = 3.1415926535897 * radius * radius;
    cout.precision(6);
    cout << fixed << area << endl;
}