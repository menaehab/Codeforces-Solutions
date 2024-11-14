#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, sum = 0;
        cin >> n;
        vector<int> arr(n);
        bool flag1 = false, flag2 = false;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
            if (arr[i] % 2 == 0) {
                flag1 = true;
            }
            else {
                flag2 = true;
            }
        }
        if (sum % 2 == 1 || (flag1 && flag2)) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
}
