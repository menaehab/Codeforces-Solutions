#include <iostream>
#include <string>
using namespace std;
int main() {
    string x;
    cin >> x;
    int n;
    if (x == "SUN") 
    {
        n = 7;
    }
    else if (x == "MON")
    {
        n = 6;
    }
    else if (x == "TUE")
    {
        n = 5;
    }
    else if (x == "WED") 
    {
        n = 4;
    }
    else if (x == "THU") 
    {
        n = 3;
    }
    else if (x == "FRI") 
    {
        n = 2;
    }
    else if (x == "SAT")
    {
        n = 1;
    }
    cout << n;
}
