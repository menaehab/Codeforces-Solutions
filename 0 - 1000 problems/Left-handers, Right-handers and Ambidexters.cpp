#include <iostream>
using namespace std;
int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    while (z--)
    {
        if (x < y)
        {
            x++;
        }
        else
        {
            y++;
        }
    }
    cout << min(x, y) * 2;
}