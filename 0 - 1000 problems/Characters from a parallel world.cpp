#include <iostream>
using namespace std;
int main() {
    int x, y, z, res = 0;
    cin >> x >> y >> z;
    for (int i = 1; i <= x; i++) {
        for (int j = 1; j <= x; j++) {
            if ((i + j) % y == z) {
                res++;
            }
        }
    }
    cout << res << endl;
}
