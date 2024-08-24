#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string x;
        cin >> x;
        string res;
        for (int i = 0; i < x.size() - 1; i++) {
            res += x[i];

            if (x[i] == x[i + 1]) {
                i++;
            }
        }
        res += x[x.size() - 1];
        cout << res << endl;
    }
}