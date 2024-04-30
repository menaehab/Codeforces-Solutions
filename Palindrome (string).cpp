#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    int length = s.length();
    bool test = true;
    for (int i = 0; i < length / 2; i++) {
        if (s[i] != s[length - i - 1]) {
            test = false;
            break;
        }
    }
    if (test) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}