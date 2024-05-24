#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string k;
        int x, y;
        cin >> k >> x >> y;
        if (x >= 2400 && y - x > 0) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}
