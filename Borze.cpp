#include <iostream>
using namespace std;
int main() {
    string x;
    cin >> x;
    for (int i = 0; i < x.size(); i++) {
        if (x[i] == '-' && i + 1 < x.size() && x[i + 1] == '-') {
            cout << 2;
            ++i; 
        }
        else if (x[i] == '-' && i + 1 < x.size() && x[i + 1] == '.') {
            cout << 1;
            ++i; 
        }
        else if (x[i] == '.') {
            cout << 0;
        }
    }
}