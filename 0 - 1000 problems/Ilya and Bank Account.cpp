#include <iostream>
#include <string>
using namespace std;
int main()
{
    int x, n, res1, res2;
    cin >> x;
    res1 = x / 10;
    res2 = (x / 100) * 10 + x % 10;
    x = max(x, max(res1, res2));
    cout << x;
}