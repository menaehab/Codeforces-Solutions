#include <iostream>
using namespace std;
int main() {
    int n, m, res = 0, i = 1;
    cin >> n >> m;
    while (i <= n) {
        if (m + i * 5 <= 240) {
            m += i * 5; 
            res++;      
            i++;
        }
        else {
            break;
        }
    }
    cout << res;
}
