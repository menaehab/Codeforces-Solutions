#include <iostream>
using namespace std;
int main() {
    long long x, y;
    cin >> x >> y;
    if (x > y)
    {
        long long temp = y;
        y = x;
        x = temp;
    }
    long long sum = 0, even = 0, odd = 0 , n = 0 , xx = 0 , yy = 0;
     sum = (y - x + 1) * (x + y) / 2;
     xx = x;
     yy = y;
    if (x % 2 != 0)
    {
        xx = x;
        xx++;
    }
    if (y % 2 != 0) {
        yy = y;
        yy--;
    }
    even = ((yy - xx) / 2 + 1) * (xx + yy) / 2;
    if (x % 2 == 0) {
        x++;
    }
    if (y % 2 == 0) {
        y--;
    }
     n = (y - x) / 2 + 1;;
    odd = n * (x + y) / 2;
    cout << sum << endl;
    cout << even << endl;
    cout << odd << endl;
}