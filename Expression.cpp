#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int x, y, z;
    cin >> x >> y >> z;
    int t1 = x + y + z;
    int t2 = x * y * z;
    int t3 = x * (y + z);
    int t4 = (x + y) * z;
    int res = max(t1, max(t2, max(t3, t4)));
    cout << res;
}