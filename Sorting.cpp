#include<iostream>
using namespace std;
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int Min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[Min]) {
                Min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[Min];
        arr[Min] = temp;
    }
}
int main() {
    int N;
    cin >> N;
    int arr[1005];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    selectionSort(arr, N);
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
}