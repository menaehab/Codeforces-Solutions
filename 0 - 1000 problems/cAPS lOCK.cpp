#include <iostream>
using namespace std;
int main()
{
    string x;
    cin >> x;
    bool flag = true;  
    for (int i = 1; i < x.size(); i++)
    {
        if (islower(x[i])) {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        for (int i = 0; i < x.size(); i++)
        {
            if (islower(x[i]))  
            {
                cout << char(toupper(x[i]));
            }
            else
            {
                cout << char(tolower(x[i]));
            }
        }
    }
    else {
        cout << x;
    }
}
