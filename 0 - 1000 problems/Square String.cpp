#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string x;
        cin >> x;
        bool flag = true;
        int n = x.size();
        if (n % 2 == 0) {
            for (int i = 0; i < n / 2; i++) {
                if (x[i] != x[i + n / 2]) {
                    flag = false;
                    break;
                }
            }
        }
        else {
            flag = false; 
        }
        if (flag) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
}