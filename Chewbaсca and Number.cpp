#include <iostream>
using namespace std;
int main() {
    string x;
    cin >> x;
    if (x[0] == '9') 
    {
        cout << x[0];
    }
    else 
    {
        cout << min(x[0] - '0', '9' - x[0]);
    }
    for (int i = 1; i < x.size(); i++) {
        cout << min(x[i] - '0', '9' - x[i]);
    }
}