#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string x;
        cin >> x; 
        vector<bool> arr(26, false);
        bool flag = true;
        for (int i = 0; i < n; i++) {
            if (arr[x[i] - 'A'] && x[i] != x[i - 1]) {
                flag = false;
                break;
            }
            arr[x[i] - 'A'] = true; 
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
