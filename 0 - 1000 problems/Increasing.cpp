#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        bool flag = true;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] == arr[i + 1]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
}