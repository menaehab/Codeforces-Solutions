#include <iostream>
using namespace std;
int main() {
    long long MIN, MAX, z;
    cin >> MIN >> MAX >> z;
    long long x = min(MIN, MAX);
    long long y = max(MIN, MAX);
    long long sum1 = (x - 1) / z;
    long long sum2 = y / z;
    cout << z * ((sum2 * (sum2 + 1)) / 2 - (sum1 * (sum1 + 1)) / 2);
}