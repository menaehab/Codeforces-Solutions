#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<vector<int>> arr(n, vector<int>(k));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < k; i++) {
        for (int j = k - 1; j >= 1; j--) {
            cout << arr[i][j] << " ";
        }
        cout << arr[i][0];
        cout << endl;
    }
}
