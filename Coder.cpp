#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, res;
    cin >> n;
    res = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ((i % 2 == 0 && j % 2 == 0) || (i % 2 == 1 && j % 2 == 1))
            {
                res++;
            }
        }
    }
    cout << res << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ((i % 2 == 0 && j % 2 == 0) || (i % 2 == 1 && j % 2 == 1))
            {
                cout << 'C';
            }
            else
            {
                cout << '.';
            }
        }
        cout << endl;
    }
}