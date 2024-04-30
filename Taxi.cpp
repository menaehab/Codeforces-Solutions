#include <iostream>
using namespace std;
int main() {
    int n, one = 0, two = 0, three = 0, four = 0, res = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 1) {
            one++;
        }
        else if (x == 2) {
            two++;
        }
        else if (x == 3) {
            three++;
        }
        else if (x == 4) {
            four++;
        }
    }
    res += four; 
    res += three;
    one -= min(one, three); 
    res += (two + 1) / 2; 
    if (two % 2 == 1) {
        one -= min(2, one); 
    }
    res += (one + 3) / 4; 
    cout << res;
}
