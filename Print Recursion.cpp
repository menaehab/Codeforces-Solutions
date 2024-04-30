#include <iostream>
using namespace std;
void func(int x) {
    if (x == 0) {
        return;
    }
    cout << "I love Recursion" << endl;
    func(x - 1);
}
int main() {
    int x;
    cin >> x;
    func(x);
}
