#include <iostream>
#include <string>
using namespace std;
int main() {
    int N;
    string S;
    cin >> N >> S;
    int res = 1; 
    for (int i = 1; i < N; ++i) {
        if (S[i] != S[i - 1]) {
            res++;
        }
    }
    cout << res << endl;
}
