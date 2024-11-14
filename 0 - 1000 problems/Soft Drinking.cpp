#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a, b, l, c, d, e, f, g;
    cin >> a >> b >> l >> c >> d >> e >> f >> g;
    int x = (b * l) / f;
    int y = c * d;
    int z = e / g;
    cout << min((min(x, y)), z) / a;
}