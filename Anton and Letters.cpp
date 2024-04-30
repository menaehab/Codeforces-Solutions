#include <iostream>
#include <string>
using namespace std;
int main() {
    string x;
    getline(cin, x);
    bool flag[26] = { false };
    for (int i = 1; i < x.length() - 1; i += 3) {
        if (x[i] != ' ') {
            flag[x[i] - 'a'] = true;
        }
    }
    int count = 0;
    for (int i = 0; i < 26; ++i) {
        if (flag[i]) {
            count++;
        }
    }
    cout << count << endl;
}