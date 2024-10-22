#include <iostream>
#include <vector>
using namespace std;
int main() {
    int x, y;
    cin >> x >> y;
    vector<vector<char>> arr(x, vector<char>(y, '0'));
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cin >> arr[i][j];
        }
    }
    bool flag = true;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            if (arr[i][j] != 'W' && arr[i][j] != 'B' && arr[i][j] != 'G') {
                flag = false;
                break;
            }
        }
        if (!flag)
            break;
    }
    if (flag) {
        cout << "#Black&White";
    }
    else {
        cout << "#Color";
    }
}