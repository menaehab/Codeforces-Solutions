#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    long long n, r;
    cin >> n >> r;
    double c = 3.141592653 * r * r;
    double s = n * n;
    double res = c - s;
    cout << fixed << setprecision(6) << res <<endl;
}