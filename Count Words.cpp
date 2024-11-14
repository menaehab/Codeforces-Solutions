#include <iostream>
#include <string>
using namespace std;
int main() {
    string x;
    getline(cin, x);
    int count = 0;
    bool word = false;
    for (char ch : x) {
        if (isalpha(ch)) {
            if (!word) {
                count++;
                word = true;
            }
        }
        else {
            word = false;
        }
    }
    cout << count << endl;
}
