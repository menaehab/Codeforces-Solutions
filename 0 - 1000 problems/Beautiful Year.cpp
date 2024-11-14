#include <iostream>
using namespace std;
int main() {
    int x;
    cin >> x;
    while (true) {
        x++;
        int arr[100] = { 0 };
        int temp = x;
        bool flag = true;
        while (temp > 0) {
            int digit = temp % 10;
            if (arr[digit] > 0) {
                flag = false;  
                break;
            }
            arr[digit]++;
            temp /= 10;
        }
        if (flag) {
            cout << x << endl;
            break;
        }
    }
}
