#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int res = n / 100 + (n % 100) / 20 + ((n % 100) % 20) / 10 + (((n % 100) % 20) % 10) / 5 + (((n % 100) % 20) % 10) % 5;
    cout << res;
}