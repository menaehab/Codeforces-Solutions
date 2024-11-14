#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t; 
    for (int i = 0; i < t; ++i) {
        int x, y, z;
        cin >> x >> y >> z;
        if (x < y && y < z) {
            cout << "STAIR\n";
        }
        else if (x < y && y > z) {
            cout << "PEAK\n";
        }
        else {
            cout << "NONE\n";
        }
    }
}