#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string x;
        cin >> x;
        if (x[x.size() - 1] == 'A')
        {
            cout << "A\n";
        }
        else if (x[x.size() - 1] == 'B')
        {
            cout << "B\n";
        }
        else {
            cout << "?\n";
        }
    }
}
