#include <iostream>
using namespace std;
int main()
{
    int number,clone, rev = 0, remainder;
    cin >> number;
    clone = number;
    while (number != 0)
    {
        remainder = number % 10;
        rev = rev * 10 + remainder;
        number /= 10;
    }
    if (clone == rev)
    {
        cout << rev << endl << "YES";
    }
    else
    {
        cout << rev << endl << "NO";
    }
    return 0;
}