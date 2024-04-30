#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, res = 0;
        cin >> n >> k;
        vector<int> arr1(n);
        vector<int> arr2(n);
        for (int i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> arr2[i];
        }
        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end(), greater<int>());
        for (int i = 0; i < n; i++) {
            if (arr2[i] > arr1[i] && k != 0) {
                swap(arr2[i], arr1[i]);
                k--;
            }
            res += arr1[i];
        }
        cout << res << endl;
    }
}
