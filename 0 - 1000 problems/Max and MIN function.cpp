#include <iostream>
using namespace std;
void findMinMax(int arr[], int n, int& minNum, int& maxNum) {
    minNum = INT_MAX;
    maxNum = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] < minNum) {
            minNum = arr[i];
        }
        if (arr[i] > maxNum) {
            maxNum = arr[i];
        }
    }
}
int main() {
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    int minNum, maxNum;
    findMinMax(arr, N, minNum, maxNum);
    cout << minNum << " " << maxNum << endl;
}