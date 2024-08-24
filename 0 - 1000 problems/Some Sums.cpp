#include <iostream>
using namespace std;
int main() {
    int num, x, y, someOfSum = 0;
    cin >> num >> x >> y;
    for (int i = 1; i <= num; i++) {
        int sum = 0;
        for (int j = i; j > 0; j /= 10) {
            int counter = j % 10;
            sum += counter;
        }
        for (int c = x; c <= y; c++) {
            if (sum == c) {
                someOfSum += i;
            }
        }
    }
    cout << someOfSum;
}