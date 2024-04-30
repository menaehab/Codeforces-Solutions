#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[100];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        string x(n, 'a');
        if (n == 1)
        {
            x[n - 1] = 'b';
        }
        cout << x << endl;
    }
}
