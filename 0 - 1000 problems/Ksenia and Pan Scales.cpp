#include <iostream>
#include <string>
using namespace std;
int main()
{
    string x, y, l, r;
    cin >> x >> y;
    int s = x.find('|');
    l = x.substr(0, s);
    r = x.substr(s + 1);
    for (int i = 0; i < y.size();i++) 
    {
        char c = y[i];
        if (l.size() <= r.size()) {
            l += c;
        }
        else {
            r += c;
        }
    }
    if (l.size() == r.size()) 
    {
        cout << l << "|" << r;
    }
    else
    {
        cout << "Impossible";
    }
}