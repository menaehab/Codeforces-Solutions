#include <iostream>
using namespace std;
int main() {
    long long x, y, z,res = 1;
    cin >> x >> y >> z;
    for (int i = x; i <= y; ++i) {
        res = (res * i) % z;
    }
    cout << res;
}