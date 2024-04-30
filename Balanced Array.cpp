#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, even = 0, odd = 0;
        cin >> n;
        if ((n / 2) % 2 == 0)
        {
            cout << "YES\n";
            for (int i = 2; i <= n; i += 2)
            {
                cout << i << " ";
                even += i;
            }
            for (int i = 1; i < n - 2; i += 2)
            {
                cout << i << " ";
                odd += i;
            }
            cout << even - odd << endl;
        }
        else
        {
            cout << "NO\n";
        }
    }
}