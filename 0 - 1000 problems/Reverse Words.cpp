#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
    string x;
    getline(cin, x);
    string word;
    size_t start = 0;
    for (size_t i = 0; i <= x.length(); ++i) {
        if (i == x.length() || x[i] == ' ') {
            reverse(x.begin() + start, x.begin() + i);
            start = i + 1;
        }
    }
    cout << x << endl;
}
