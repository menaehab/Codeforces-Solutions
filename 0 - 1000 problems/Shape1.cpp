#include <iostream>
using namespace std;
int main()
{
    int height;
    cin >> height;
    for (int i = height; i >= 1; i--)
    {
        for (int k = 0; k <=  i - 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
