#include <iostream>
using namespace std;
int main() {
    int x;
    cin >> x;
    for (int i = 0; i < x; i++) {
        int n = 1;
        for (int j = 0; j <= i; j++) {
            cout << n << " ";
            n = n * (i - j) / (j + 1);
        }
        cout << endl;
    }
}
