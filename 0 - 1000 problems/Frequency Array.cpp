#include <iostream>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int a[100005] = { 0 };
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a[x]++;
    }
    for (int i = 1; i <= m; i++) {
        cout << a[i] << '\n';
    }
}