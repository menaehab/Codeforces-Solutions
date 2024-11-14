#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[1005] = { 0 };
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        int r = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] + 1 == arr[j])
            {
                r++;
                if (r > 1) break;;
                c++;
            }
        }
    }
    cout << c;
}