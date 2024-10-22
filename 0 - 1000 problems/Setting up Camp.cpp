#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        bool flag = true;
        int x, y, z, res = 0;
        cin >> x >> y >> z;
        res += x;
        if (y > 0)
        {
            if (y % 3 == 0) 
            {
                res += y / 3;
            }
            else if (y % 3 == 1) 
            {
                if (z >= 2) 
                {
                    res += y / 3 + 1;
                    z -= 2;
                }
                else 
                {
                    flag = false;
                }
            }
            else 
            {
                if (z >= 1) 
                {
                    res += y / 3 + 1;
                    z -= 1;
                }
                else 
                {
                    flag = false;
                }
            }
        }
        if (z > 0) 
        {
            res += z / 3;
            if (z % 3 != 0) 
            {
                res++;
            }
        }
        if (flag) 
        {
            cout << res << endl;
        }
        else 
        {
            cout << -1 << endl;
        }
    }
}
