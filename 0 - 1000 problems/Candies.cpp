#include <iostream>
#include <cmath>
using namespace std;
int main() {
    long long n;
    cin >> n;
    long long m = (sqrt(1 + 8 * n) - 1) / 2;
    cout << m << endl;
}