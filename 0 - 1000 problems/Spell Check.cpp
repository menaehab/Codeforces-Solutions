#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string x;
        cin >> n >> x;
        if (n != 5) {
            cout << "NO\n";
            continue;
        }
        sort(x.begin(), x.end());
        if (x == "Timru") {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
}