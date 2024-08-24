#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, one = 0, two = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x == 1) {
                one++;
            }
            else {
                two++;
            }
        }
        if (one % 2 == 0 && (two % 2 == 0 || (two > 0 && one >= 2))) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
}