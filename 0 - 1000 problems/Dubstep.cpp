#include <iostream>
using namespace std;
int main() {
    string x;
    cin >> x;
    for (int i = 0; i < x.size(); i++) {
        if (x[i] == 'W' && x[i + 1] == 'U' && x[i + 2] == 'B') {
            i += 2;
            if (i > 1 && i < x.size() - 1) {
                cout << " ";
            }
        }
        else {
            cout << x[i];
        }
    }
}