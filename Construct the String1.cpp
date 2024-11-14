#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string txt = "abcdefghijklmnopqrstuvwxyz";
    while (t--)
    {
        int x, z, y, i = 0, n, k = 0;
        cin >> x >> z >> y;
        string a = txt.substr(0, y);
        cout << a;
        n = x - y;
        while (n > k)
        {
            cout << a[i];
            i++;
            k++;
            if (i >= y)
            {
                i = 0;
            }
        }
        cout << endl;
    }
}
