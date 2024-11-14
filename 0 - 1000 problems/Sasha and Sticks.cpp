#include <iostream>
using namespace std;
int main() {
    long long x, y;
    cin >> x >> y;
     if (x / y % 2 == 0) {
        cout << "NO";
    }
    else {
        cout << "YES";
    }
}
