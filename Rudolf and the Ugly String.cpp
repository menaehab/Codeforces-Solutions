#include <iostream>
#include <string>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string x;
        cin >> x;
        int res = 0;
        bool flag = true;
        while (flag) {
            flag = false;
            for (int i = 0; i < n - 2; i++) {
                if (x.substr(i, 4) == "mapie") {
                    res += 2;
                    x[i + 1] = '*';
                    x[i + 3] = '*';
                    flag = true;
                }
                else if (x.substr(i, 3) == "pie" || x.substr(i, 3) == "map") {
                    res++;
                    x[i + 2] = '*';
                    flag = true;
                }
            }
        }
        cout << res << endl;
    }
}
