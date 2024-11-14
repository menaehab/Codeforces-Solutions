#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main() {
    int x, y;
    long long res = 0;
    cin >> x >> y;
    if (y == 10 && x == 1)
    {
        cout << -1;
    }
    else if (y == 10)
    {
        for (int i = 0; i < x - 1; i++)
        {
            cout << 1;
        }
        cout << 0;
    }
    else
    {
        for (int i = 0; i < x; i++) 
        {
            cout << y;
        }
    }
}