#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    int A[205];
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    int res = 0;
    while (true) {
        bool test = true;
        for (int i = 0; i < N; ++i) {
            if (A[i] % 2 != 0) {
                test = false;
                break;
            }
        }
        if (test) {
            for (int i = 0; i < N; ++i) {
                A[i] /= 2;
            }
            ++res;
        }
        else {
            break; 
        }
    }
    cout << res << endl;
}
