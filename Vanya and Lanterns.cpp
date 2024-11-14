#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n, l;
    double diff = 0.0, res;
    cin >> n >> l;
    vector<double> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    for (int i = 1; i < n; i++) {
        diff = max(diff, arr[i] - arr[i - 1]);
    }
    res = max(diff / 2.0, max(arr[0], (l - arr[n - 1])));
    cout.precision(10);
    cout << fixed << res << endl;
}
