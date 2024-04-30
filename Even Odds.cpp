#include <iostream>
using namespace std;
int main() {
    long long x, n;
    cin >> x >> n;
    if (n <= (x + 1) / 2) {
        cout << n * 2 - 1;
    }
    else {
        cout << (n - (x + 1) / 2) * 2;
    }
}