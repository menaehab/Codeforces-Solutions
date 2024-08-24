#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a;
    cin >> a;
    long long first = 0;
    long long last = a - 1;
    long long arr[a];

    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < a; i++)
    {
        if (i % 2 == 0)
            cout << arr[first++] << " ";
        else
            cout << arr[last--] << " ";
    }
}