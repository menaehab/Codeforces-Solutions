#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, res;
        cin >> n;
        string x;
        cin >> x;
        int l = 0, r = n - 1;
            while (r > l && x[l] != x[r]) {
                l++;
                r--;
            }
        res = r - l + 1;
        cout << res << endl; 
    }
}