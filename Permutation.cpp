#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[5005] = {0};
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x <= n)
        {
            arr[x] = 1;
        }
    }
    cout << count(arr + 1, arr + n + 1, 0);
}