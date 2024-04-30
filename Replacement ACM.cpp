#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    long long numbers[4] = { a, b, c, d };
    sort(numbers, numbers + 4);
    numbers[3] = 1;
    long long result = numbers[0] + numbers[1] + numbers[2] + numbers[3];
    cout << result << endl;
}