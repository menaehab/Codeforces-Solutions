#include <iostream>
using namespace std;
int main() {
    int N, M;
    cin >> N >> M;
    int A[10005], B[10005];
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    for (int i = 0; i < M; ++i) {
        cin >> B[i];
    }
    int i = 0, j = 0;
    while (i < N && j < M) {
        if (A[i] == B[j]) {
            ++j;
        }
        ++i;
    }
    if (j == M) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}