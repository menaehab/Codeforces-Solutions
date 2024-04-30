#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << abs(arr[0] - arr[1]) << " " << max(abs(arr[0] - arr[n - 1]), abs(arr[0] - arr[n - 2])) << endl;
    for (int i = 1; i < n - 1; i++) {
        int mn = min(abs(arr[i] - arr[i - 1]), abs(arr[i] - arr[i + 1]));
        int mx = max(abs(arr[i] - arr[0]), abs(arr[i] - arr[n - 1]));
        cout << mn << " " << mx << endl;
    }
    cout << abs(arr[n - 1] - arr[n - 2]) << " " << max(abs(arr[n - 1] - arr[0]), abs(arr[n - 1] - arr[n - 2])) << endl;
}