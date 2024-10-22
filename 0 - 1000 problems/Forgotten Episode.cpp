#include <iostream>
using namespace std;
int main() {
    int n,x;
    cin >> n;
    int arr[n] = { 0 };
    for (int i = 0; i < n - 1; i++) {
        cin >> x;
        arr[x - 1]++;
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            cout << i + 1;
            break;
        }
    }
}