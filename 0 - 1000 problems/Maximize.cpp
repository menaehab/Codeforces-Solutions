#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, mx = 0, y = 1;
        cin >> x;
        for (int i = 2; i < x; i++)
        {
            int gcd = __gcd(x, i) + i;
            if (gcd > mx) {
                mx = gcd;
                y = i;
            }
        }
        cout << y << endl;
    }
}
