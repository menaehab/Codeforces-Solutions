#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, res = 0;
        vector<int> arr(26, 0);
        cin >> n;
        string x;
        cin >> x;
        for (int i = 0; i < n; i++) {
            char index = x[i];
            if (arr[index - 'A'] == 0) {
                res += 2;
                arr[index - 'A'] = 1;
            }
            else {
                res += 1;
            }
        }
        cout << res << endl;
    }
}