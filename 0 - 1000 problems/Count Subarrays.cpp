#include <iostream>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int A[102];
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        int res = 0;
        for (int i = 0; i < N; ++i) {
            int test = A[i];
            for (int j = i; j < N; ++j) {
                if (A[j] >= test) {
                    test = A[j];
                    res++;
                }
                else {
                    break;
                }
            }
        }
        cout << res << endl;
    }
}
