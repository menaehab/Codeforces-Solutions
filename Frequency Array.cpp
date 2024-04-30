#include <iostream>
using namespace std;
int main() {
    int N, M;
    cin >> N >> M;
    int A[100005] = { 0 };
    for (int i = 0; i < N; ++i) {
        int num;
        cin >> num;
        A[num]++;
    }
    for (int i = 1; i <= M; ++i) {
        cout << A[i] << '\n';
    }
}