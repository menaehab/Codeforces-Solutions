#include <iostream>
using namespace std;
int main() {
    int x;
    cin >> x;
    int res = 0;
    if (x % 2 == 0 && x != 10) {
        res += x / 25;
        x %= 25;
        res += x / 10;
        x %= 10;
        res += x / 5;
        x %= 5;
        res += x;
    }
    cout << res << endl;
}