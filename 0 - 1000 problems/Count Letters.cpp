#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    int arr[26] = { 0 };
    for (char c : s) {
        arr[c - 'a']++;
    }
    for (char c = 'a'; c <= 'z'; ++c) {
        int res = arr[c - 'a'];
        if (res > 0) {
            cout << c << " : " << res << endl;
        }
    }
}