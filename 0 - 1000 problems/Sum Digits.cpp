#include <iostream>
#include <string>
using namespace std;
int main() {
    int N;
    cin >> N;
    string digits;
    cin >> digits;
    int res = 0;
    for (int i = 0; i < N; ++i) {
        res += digits[i] - '0';
    }
    cout << res << endl;
}