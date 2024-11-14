#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[105];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        if (a[i] == 0) {
            for (int j = i - 1, k = 0; j > k; --j, ++k) {
                int temp = a[j];
                a[j] = a[k];
                a[k] = temp;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
}