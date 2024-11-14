#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    int arr1[a][b];
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cin >> arr1[i][j];
        }
    }
    int x, y;
    cin >> x >> y;
    int arr2[x][y];
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cin >> arr2[i][j];
        }
    }
    int res[a][y];
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < y; j++) {
            res[i][j] = 0;
            for (int k = 0; k < b; k++) {
                res[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < y; j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}