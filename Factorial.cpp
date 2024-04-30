#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    for (int j = 1; j <= n; j++)
    {
        long long x;
        cin >> x;

        if (x == 0) {
            cout << 1 << endl;
        }
        else {
            long long factorial = 1;

            for (int i = 1; i <= x; ++i) {
                factorial *= i;
            }

            cout << factorial << endl;
        }
    }

    return 0;
}