#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    long long x, div,res;
    cin >> x;
    div = pow(10, n);
     res = x % div;
    cout << res;
}
