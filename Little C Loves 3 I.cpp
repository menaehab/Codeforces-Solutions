#include <iostream>
using namespace std;
int main() {
    int x;
    cin >> x;
    if (x % 3 == 0)
    {
        cout << x / 3 << " " << x / 3 << " " << x / 3;
    }
    else if (x % 3 == 1)
    {
        cout << x / 3 << " " << x / 3 << " " << (x / 3) + 1;
    }
    else {
        cout << x / 3 << " " << x / 3 << " " << (x / 3) + 2;
    }
}