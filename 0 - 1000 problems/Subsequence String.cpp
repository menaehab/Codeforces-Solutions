#include <iostream>
#include <string>
using namespace std;
int main() {
    string S;
    cin >> S;
    string test = "hello";
    int i = 0, j = 0;
    while (i < S.size() && j < test.size()) {
        if (S[i] == test[j]) {
            j++;
        }
        i++;
    }
    if (j == test.size()) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}