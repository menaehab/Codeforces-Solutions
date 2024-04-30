#include <iostream>
using namespace std;
int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; ++i) {
        int X, Y;
        cin >> X >> Y;
        if (X > Y) {
            swap(X, Y);
        }
        int res = 0;
        for (int j = X + 1; j < Y; ++j) {
            if (j % 2 != 0) {
                res += j;
            }
        }
        cout << res << endl;
    }
}