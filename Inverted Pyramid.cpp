#include <iostream>
using namespace std;

void IiHateIt(int n, int c) {
    if (c <= 0) {
        return;
    }
    for (int j = n; j > 0; j--) {
        cout << ' ';
    }
    for (int i = 0; i < c; i++) {
        cout << '*';
    }
    cout << endl;
    IiHateIt(n + 1, c - 2);
}

int main() {
    int x;
    cin >> x;
    IiHateIt(0, (2 * x) - 1);
    return 0;
}
