#include <iostream>
using namespace std;
int main() {
    int res, x;
    int n;
    string s;
    cin >> n >> s;
    int arr[26] = { 0 };
    for (int i = 0; i < n; i++)
        arr[s[i] - 'a']++;
    int count = 0;
    for (int i = 0; i < 26; i++) {
        if (arr[i] > 0) {
            count++;
        }
    }
    x = 26 - count;
    res = n - count;

    if (x < res) {
        cout << "-1";
    }
    else {
        cout << res;
    }
}
