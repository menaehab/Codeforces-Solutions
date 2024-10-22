#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t > 0) {
        long long n, s;
        cin >> n >> s;
        if ((n * (n + 1)) / 2 >= s) {
            while (s > 0) {
                if (s <= n) {
                    cout << s << endl;
                    break;
                }
                s = s - n;
                cout << n << " ";
                n--;
            }
        }
        else
            cout << -1 << endl;
        t--;
    }
}