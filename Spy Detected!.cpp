#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        int index = 0;
        if (arr[0] != arr[1] && arr[0] != arr[2]) {
            cout << 1 << endl;
        }
        else {
            for (int i = 1; i < n; ++i) {
                if (arr[i] != arr[0]) {
                    index = i;
                    break;
                }
            }
            cout << index + 1 << endl;
        }
    }
}