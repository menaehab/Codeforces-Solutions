#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> arr(200001, 0);
    for (int i = 1; i < arr.size(); i++) {
        int sum = 0, num = i;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        arr[i] = arr[i - 1] + sum;
    }
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << arr[n] << endl;
    }
}
