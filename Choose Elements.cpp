#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n, k;
    int a[1003];
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n);
    reverse(a, a + n);
    long long res = 0;
    for (int i = 0; i < k; ++i) {
        if (a[i] < 0)
        {
            break;
        }
        res += a[i];
    }
    cout << res << endl;
}