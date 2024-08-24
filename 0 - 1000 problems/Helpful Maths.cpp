#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string txt;
    cin >> txt;
    int n = (txt.size() / 2) + 1;
    int a[n];
    for (int i = 0; i < txt.size(); i += 2)
    {
        a[i / 2] = txt[i] - '0';
    }
    sort(a, a + n);
    for (int i = 0; i < n - 1; i++)
    {
        cout << a[i] << "+";
    }
    cout << a[n - 1];
}
