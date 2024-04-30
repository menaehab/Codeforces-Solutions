#include <iostream>
using namespace std;
int main() {
    int A[100005];
    int N;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    int test = 1;
    for (int i = 0, j = N - 1; i < j; ++i, --j) {
        if (A[i] != A[j]) {
            test = 0;
            break;
        }
    }
    if (test == 1) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}