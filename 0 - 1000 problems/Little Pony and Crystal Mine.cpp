#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= (n / 2) + 1; i++)
    {
        for (int j = 1; j <= (n / 2) - i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= i * 2 - 1; j++)
        {
            cout << "D";
        }
        for (int j = 1; j <= (n / 2) - i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= n / 2; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= n - i * 2; j++)
        {
            cout << "D";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}