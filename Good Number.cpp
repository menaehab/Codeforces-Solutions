#include <iostream>
using namespace std;
int main() {
    int t, k, res = 0;
    cin >> t >> k;
    while (t--) {
        string x;
        cin >> x;
        bool flag = true;
        for (int i = 0; i <= k; i++) {
            bool found = false;
            for (int j = 0; j < x.size(); j++) {
                if (x[j] - '0' == i) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                flag = false;
                break;
            }
        }
        if (flag) {
            res++;
        }
    }
    cout << res;
}