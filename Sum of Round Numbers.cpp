#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x = 1, sum = 0;
        cin >> n;
        int res[10];
        int index = 0;
        while (n > 0) {
            int d = n % 10;
            if (d > 0) {
                int z = d * x;
                res[index++] = z;
                sum++;
            }
            n /= 10;
            x *= 10;
        }
        cout << sum << endl;
        for (int i = 0; i < sum; ++i) {
            cout << res[i] << " ";
        }
        cout << endl;
    }
}
