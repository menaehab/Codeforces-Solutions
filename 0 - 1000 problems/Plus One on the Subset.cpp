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
        int mn = INT_MAX, mx = INT_MIN; 
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            mn = min(mn, arr[i]); 
            mx = max(mx, arr[i]); 
        }
        int res = mx - mn;
        cout << res << endl;
    }
}
