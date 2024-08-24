#include <iostream>
#include <cmath>
using namespace std;
int main() {
    long long n;
    cin >> n;

    if (n == 1) {
        cout << "NO";
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}