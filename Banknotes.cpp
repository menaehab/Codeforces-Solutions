#include <iostream>
using namespace std;
int main() {
    long long x;
    cin >> x;
    long long res = 0;
    res += x / 50;
    x %= 50;
    res += x / 20;
    x %= 20;
    res += x;
    cout << res << endl;
}