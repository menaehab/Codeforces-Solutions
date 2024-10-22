#include <iostream>
using namespace std;
void func(int n) {
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }
    n = 0;
    if (n == 0) {
        return;
    }
    func(n - 1);
}
int main() {
    int x;
    cin >> x;
    func(x);
}
