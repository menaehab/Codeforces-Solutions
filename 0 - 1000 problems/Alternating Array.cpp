#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int a, ctr = 0, ctr1 = 0;
    cin >> a;
    int arr[a], temp[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
        temp[i] = arr[i];
    }
    for (int i = 0; i < a - 1; i++)
    {
        if ((arr[i] > 0 && arr[i + 1] > 0) || (arr[i] < 0 && arr[i + 1] < 0))
        {
            ctr++;
            arr[i + 1] *= -1;
        }
    }
    temp[0] *= -1;
    ctr1++;
    for (int i = 0; i < a - 1; i++)
    {
        if ((temp[i] > 0 && temp[i + 1] > 0) || (temp[i] < 0 && temp[i + 1] < 0))
        {

            ctr1++;
            temp[i + 1] *= -1;
        }
    }
    if (ctr1 < ctr) cout << ctr1;
    else cout << ctr;
}