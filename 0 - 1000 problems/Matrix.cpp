#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int N;
    cin >> N;
    int A[105][105];
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> A[i][j];
        }
    }
    int x = 0;
    int y = 0;
    for (int i = 0; i < N; ++i) {
        x += A[i][i];
    }
    for (int i = 0; i < N; ++i) {
        y += A[i][N - 1 - i];
    }
    int res = abs(x - y);
    cout << res << endl;
}