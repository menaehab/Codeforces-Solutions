#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int l = 0, r = n - 1;
    int a = 0, b = 0;
    bool flag = true;
    while (l <= r) {
        if (arr[l] > arr[r]) {
            if (flag) {
                a += arr[l];
            }
            else {
                b += arr[l];
            }
            ++l;
        }
        else {
            if (flag) {
                a += arr[r];
            }
            else {
                b += arr[r];
            }
            --r;
        }
        flag = !flag;
    }
    cout << a << " " << b;
}
