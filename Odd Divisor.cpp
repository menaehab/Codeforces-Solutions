#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        bool flag = false;
        if (n % 2 != 0)
        {
            flag = true;
        }
        else
        {
            while (n >= 1)
            {
                n = n / 2;
                if (n % 2 != 0 && n != 1)
                {
                    flag = true;
                    break;
                }
            }
        }
        if (flag)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}
