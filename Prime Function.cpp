#include <iostream>
#include <cmath>
using namespace std;
bool prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        if (prime(N)) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}