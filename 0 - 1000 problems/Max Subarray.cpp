#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[105]; 
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++) {
            int max_num = arr[i];
            for (int j = i; j < n; j++) {
                max_num = max(max_num, arr[j]);
                cout << max_num << " ";
            }
        }

        cout << endl;
    }
}