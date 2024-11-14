#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n,test = 1,res = 1;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 1; i < n; ++i) {
        if (a[i] >= a[i - 1]) {
            test++;
        }
        else {
            test = 1;
        }
        res = max(res, test);
    }
    cout << res << endl;
}