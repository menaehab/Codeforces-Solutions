#include <iostream>
using namespace std;
int main() {
    int N, X;
    cin >> N >> X;
    int test = 0.7 * N;
    if (X >= test) {
        cout << "KEEP";
    }
    else {
        cout << "KICK";
    }
}
