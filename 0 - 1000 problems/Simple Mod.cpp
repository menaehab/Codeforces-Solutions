#include <iostream>
using namespace std;
int main() {
    long long N;
    cin >> N;
    for (long long X = 0; X <= 1e+100; ++X) {
        for (long long Y = 0; Y <= 1e+100; ++Y) {
            if (((X * X) + (Y * Y)) % N == 0) {
                cout << X << " " << Y << endl;
                return 0;
            }
        }
    }
    cout << "No solutions" << endl;
}