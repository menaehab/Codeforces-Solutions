#include <iostream>
using namespace std;
void shiftRight(int arr[], int N, int X) {
    X %= N;
    for (int i = 0; i < (N - X) / 2; i++) {
        swap(arr[i], arr[N - X - 1 - i]);
    }
    for (int i = N - X; i < (N + N - X) / 2; i++) {
        swap(arr[i], arr[N + N - X - 1 - i]);
    }
    for (int i = 0; i < N / 2; i++) {
        swap(arr[i], arr[N - 1 - i]);
    }
}
int main() {
    int N, X;
    cin >> N >> X;
    int arr[10005];  
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    shiftRight(arr, N, X);
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
}
