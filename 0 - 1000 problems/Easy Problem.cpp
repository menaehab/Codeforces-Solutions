#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    if (n == 1 || (n % 2 != 0)) {
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
