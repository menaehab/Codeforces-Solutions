#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int N, Q;
    cin >> N >> Q;
    int A[N];
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    sort(A, A + N);
    for (int i = 0; i < Q; ++i) {
        int X;
        cin >> X;
        bool found = binary_search(A, A + N, X);
        if (found) {
            cout << "found\n";
        }
        else {
            cout << "not found\n";
        }
    }
}