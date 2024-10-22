#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    if (t == 1)
    {
        string x;
        long long n, res = 0;
        cin >> x >> n;
        for (long long i = x.size() - 1; i >= 0; i--)
        {
            long long d;
            if (isdigit(x[i]))
            {
                d = x[i] - '0';
            }
            else
            {
                d = x[i] - '0' + 10;
            }
            res += d * pow(n, x.size() - 1 - i);
        }
        cout << res;
    }
    else
    {
        long long x;
        cin >> x;
        long long n;
        cin >> n;
        string res = "";
        while (x > 0)
        {
            long long r = x % n;
            char z;
            if (r < 10)
            {
                z = r + '0';
            }
            else
            {
                z = r - 10 + 'A';
            }
            res += z;
            x /= n;
        }
        reverse(res.begin(), res.end());
        cout << res;
    }
}