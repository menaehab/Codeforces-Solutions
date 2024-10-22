#include <iostream>
using namespace std;
int sum(int X, int Y) {
    return X + Y;
}
int main() {
    int X, Y;
    cin >> X >> Y;
    cout << sum(X, Y) << endl;
}
