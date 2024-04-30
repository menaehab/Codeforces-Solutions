#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long  t, n, x, flag = 0, arr[200];
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        for (long long i = 0; i < n; i++) 
        {
            cin >> arr[i];
        }
        for (long long i = 1; i < n; i++){
            if (arr[i] < arr[i - 1])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "YES\n";
        }
        else if (x == 1)
        {
            cout << "NO\n";
        }
        else 
        {
            cout << "YES\n";
        }
    }
}