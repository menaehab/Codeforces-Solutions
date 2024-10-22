#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int res1, res2;
        if (n % 3 == 0) {
            res1 = n / 3;
            res2 = n / 3;
        }
        else if (n % 3 == 1) {
            res1 = (n - 1) / 3 + 1;
            res2 = (n - 1) / 3;
        }
        else {
            res1 = (n - 2) / 3;
            res2 = (n - 2) / 3 + 1;
        }
        cout << res1 << " " << res2 << endl;
    }
}
