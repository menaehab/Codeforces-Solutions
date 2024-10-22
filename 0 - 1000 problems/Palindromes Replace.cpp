#include <iostream>
using namespace std;
int main() {
    string x;
    cin >> x;
    int n = x.size();
    for (int i = 0; i < n / 2; i++)
    {
        if ((x[i] == '?' || x[n - i - 1] == '?') || (x[i] == x[n - i - 1])) 
        {
            if (x[i] == '?' && x[n - 1 - i] == '?') 
            {
                x[i] = 'a';
                x[n - 1 - i] = 'a';
            }
            else if (x[i] == '?')
            {
                x[i] = x[n - 1 - i];
            }
            else 
            {
                x[n - 1 - i] = x[i];
            }
        }
        else 
        {
            cout << "-1\n";
            return 0;
        }
    }
    if (n % 2 == 1 && x[n / 2] == '?') 
    {
        x[n / 2] = 'a'; 
    }
    cout << x;
}