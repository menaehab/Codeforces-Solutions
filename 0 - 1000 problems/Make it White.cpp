#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        char arr[100]; 
        for (int j = 0; j < n; j++) {
            cin >> arr[j];
        }

        int start, end;
        for (int j = 0; j < n; j++) {
            if (arr[j] == 'B') {
                start = j;
                break;
            }
        }

        for (int j = n - 1; j >= 0; j--) {
            if (arr[j] == 'B') {
                end = j;
                break;
            }
        }
        cout << end - start + 1 << endl;
    }
}
