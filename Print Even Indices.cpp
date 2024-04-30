#include <iostream>
using namespace std;

void IiHateIt(int arr[], int n, int i) {
    if (i < n) {
        IiHateIt(arr, n, i + 2);
        cout << arr[i] << " ";
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    IiHateIt(arr, n, 0);
}