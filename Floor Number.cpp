#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;

        if (n <= 2) {
            cout << 1 << endl;
            continue;
        }
        n -= 2; 
        int res = 1;
        res += n / x; 
        if (n % x != 0)
            res++;
        cout << res << endl;
    }
}
