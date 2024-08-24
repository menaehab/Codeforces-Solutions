#include <iostream>
using namespace std;
int main() {
    int x, y, r, c, test = 1;
    cin >> x >> y;
    char arr[105][105];
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {            
            cin >> arr[i][j];
        }
    }
    cin >> r >> c;
    for (int i = r - 2; i <= r; i++) {
        for (int j = c - 2; j <= c; j++) {
            if (i >= 0 && i < x && j >= 0 && j < y) {           
                if ((arr[i][j] != 'x') && !(i == r - 1 && j == c - 1)) {  
                    test = 0;
                }
            }
        }
    }
    if (test == 1) {
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }
}