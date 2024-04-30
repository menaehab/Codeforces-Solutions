#include <iostream>
#include <cmath>
using namespace std;
long long cal(int X, int N) {
    long long result = 0;
    for (int i = 0; i <= N; i += 2) {
        result += pow(X, i);
    }
    return result - 1;
}
int main() {
    int X, N;
    cin >> X >> N;
    long long result = cal(X, N);
    cout << result << endl;
}