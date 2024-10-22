#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        long long x, y;
        cin >> x >> y;
        if (x < y) {
            cout << y - x << " L" << endl;
        }
        else if (x > y) {
            cout << x - y << " R" << endl;
        }
        else {
            cout << "0 A" << endl;
        }
    }
}
