#include <iostream>
using namespace std;
int IiHateIt(int n, int c) {
    if (c <= 0) {
        return 0;

    }
    IiHateIt(n + 1, c - 2);
    for (int j = n; j > 0; j--) {
        cout << ' ';
    }
    for (int i = 0; i < c; i++) {
        cout << '*';
    }
    cout << endl;
}
int main()
{
    int x;
    cin >> x;
    IiHateIt(0, (2 * x) - 1);
    return 0;
}