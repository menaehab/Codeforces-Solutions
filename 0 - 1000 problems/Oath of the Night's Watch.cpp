#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n, res = 0;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    if (n > 2) {
        sort(arr.begin(), arr.end());
        for (int i = 1; i < n - 1; i++) {
            if (arr[i] > arr[0] && arr[i] < arr[n - 1]) {
                res++;
            }
        }
    }
    cout << res;
}