#include <iostream>
#include <string>
using namespace std;
int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;
    int res = 0;
    for (int i = 0; i < S.size(); ++i) {
        switch (S[i]) {
        case 'V':
            res += 5;
            break;
        case 'W':
            res += 2;
            break;
        case 'X':
            if (i + 1 < N) {
                S.erase(i + 1, 1);
                --N;
            }
            break;
        case 'Y':
            if (i + 1 < N) {
                char temp = S[i + 1];
                S.erase(i + 1, 1);
                S += temp;
            }
            break;
        case 'Z':
            if (i + 1 < N) {
                switch (S[i + 1]) {
                case 'V':
                    res /= 5;
                    break;
                case 'W':
                    res /= 2;
                    break;
                }
                S.erase(i + 1, 1);
                --N;
            }
            break;
        }
    }
    cout << res << endl;
}