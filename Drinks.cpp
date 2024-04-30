#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    double res = 0;
    for (int i = 0; i < n; i++)
    {
        double x;
        cin >> x;
        res += x;
    }
    cout.precision(12);
    cout << fixed << res / n << endl;
}