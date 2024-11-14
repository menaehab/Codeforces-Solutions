#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    long long n;
    long long h;
    long long res = 0;
    cin >> n >> h;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; i++) {
        res += (arr[i] * h);
        if (h > 1) {
            h--;
        }
    }
    cout << res;
}
