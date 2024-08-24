#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int res = 0;
        for (int i = 1; i <= 9; i++) {
            int sum = 0;
            for (int j = 1; j <= 4; j++) {
                sum = sum * 10 + i;
                res += j;
                if (sum == n) {
                    cout << res << endl;
                }
            }
        }
    }
}
