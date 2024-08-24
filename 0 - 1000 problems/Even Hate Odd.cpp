#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[100005];
        int ec = 0, oc = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] % 2 == 0) {
                ec++;
            }
            else {
                oc++;
            }
        }
        if (ec == oc) {
            cout << 0 << endl;
        }
        else if (abs(ec - oc) % 2 == 0) {
            cout << abs(ec - oc) / 2 << endl;
        }
        else {
            cout << -1 << endl;
        }
    }
}
